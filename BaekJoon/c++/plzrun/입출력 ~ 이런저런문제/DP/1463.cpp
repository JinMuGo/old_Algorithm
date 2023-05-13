/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1463.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:01:54 by jgo               #+#    #+#             */
/*   Updated: 2023/05/13 12:41:09 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	int N;
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N;
	int* dp = new int[N + 1];
	dp[1] = 0;

	for (int i = 2; i <= N; ++i) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0)
			dp[i] = std::min(dp[i], dp[i / 3] + 1);
		if (i % 2 == 0)
			dp[i] = std::min(dp[i], dp[i / 2] + 1);
	}

	std::cout << dp[N];
	delete[] dp;
	return (0);
}
// 풀고 난 후 이곳의 링크를 보니 조금 더 이해가 쉬웠다. 
// https://ssinee.tistory.com/entry/%EB%B0%B1%EC%A4%80-1463%EB%B2%88-1%EB%A1%9C-%EB%A7%8C%EB%93%A4%EA%B8%B0-CDP
