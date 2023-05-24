/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11057.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:28:43 by jgo               #+#    #+#             */
/*   Updated: 2023/05/24 14:58:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <numeric>
#include <vector>

static inline int getNum(std::vector<int> vec, int j) {
	int sum = 0;

	for (int i = 0; i < j; ++i)
		sum += vec[i];
	return (sum);
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, prev_sum;

	std::vector<std::vector<int>> dp(1001, std::vector<int>(10));
	std::fill(dp[0].begin(), dp[0].end(), 1);

	std::cin >> n;

	for (int i = 1; i < n; ++i) {
		prev_sum =
			std::accumulate(dp[i - 1].begin(), dp[i - 1].end(), 0);
		dp[i][0] = prev_sum;
		for (int j = 1; j < 9; ++j)
			dp[i][j] = (prev_sum - getNum(dp[i - 1], j)) % 10007;
		dp[i][9] = 1;
	}

	std::cout << std::accumulate(dp[n - 1].begin(), dp[n - 1].end(), 0) % 10007;

	return (0);
}