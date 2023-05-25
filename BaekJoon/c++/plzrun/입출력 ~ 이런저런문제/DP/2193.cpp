/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2193.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:02:27 by jgo               #+#    #+#             */
/*   Updated: 2023/05/25 11:42:53 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

// 정답의 범위가 int인지 long인지 어떻게 알 수 있을까?
// https://www.acmicpc.net/board/view/91686 
int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n;

	std::cin >> n;
	std::vector<std::vector<long long>> dp(91, std::vector<long long>(2, 0));
	dp[1] = {0, 1};
	dp[2] = {1, 0};
	dp[3] = {1, 1};

	for (int i = 4; i <= n; ++i)
		dp[i] = {dp[i - 1][0] + dp[i - 1][1], dp[i - 1][0]};

	std::cout << dp[n][0] + dp[n][1] << std::endl;
	return (0);
}