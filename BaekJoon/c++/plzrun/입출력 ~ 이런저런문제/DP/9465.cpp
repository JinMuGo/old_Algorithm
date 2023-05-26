/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9465.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:02:01 by jgo               #+#    #+#             */
/*   Updated: 2023/05/26 11:46:46 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

// https://omyodevelop.tistory.com/51
// 위 블로그에서 50 -> 100으로 가는 경우의 수를 고려할 필요 없다는 점에 주목 할 것. 
// 정답의 최댓값은 100 * 100000이기 때문에 int로 선언.
static inline void solution() {
	int n;

	std::cin >> n;
	std::vector<std::vector<int>> arr(n + 1, std::vector<int>(2));
	std::vector<std::vector<int>> dp(n + 1, std::vector<int>(2));

	for (int i = 0; i < 2; ++i) {
		for (int j = 1; j <= n; ++j) {
			std::cin >> arr[j][i];
		}
	}
	dp[0][0] = dp[0][1] = 0;
	arr[0][0] = arr[0][1] = 0;
	dp[1][0] = arr[1][0];
	dp[1][1] = arr[1][1];

	for (int i = 2; i <= n; ++i) {
		dp[i][0] = arr[i][0] + std::max(dp[i - 2][1], dp[i - 1][1]);
		dp[i][1] = arr[i][1] + std::max(dp[i - 2][0], dp[i - 1][0]);
	}

	std::cout << std::max(dp[n][0], dp[n][1]) << std::endl;
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int t;

	std::cin >> t;
	while (t--)
		solution();
	return (0);
}