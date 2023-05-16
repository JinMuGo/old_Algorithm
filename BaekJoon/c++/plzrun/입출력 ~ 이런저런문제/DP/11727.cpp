/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11727.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:18:16 by jgo               #+#    #+#             */
/*   Updated: 2023/05/16 10:40:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	short n;

	std::cin >> n;
	short* dp = new short[n + 1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 3;

	for (short i = 3; i <= n; ++i)
		dp[i] = (2 * (dp[i - 2]) + (dp[i - 1])) % 10007;
	std::cout << dp[n];
	delete[] dp;

	return (0);
}
