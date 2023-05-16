/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9095.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:36 by jgo               #+#    #+#             */
/*   Updated: 2023/05/16 12:25:06 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int t, n, tmp, max = -1;

	std::cin >> t;
	int* nArr = new int[t];
	tmp = t;
	while (t--) {
		std::cin >> nArr[t];
		if (max < nArr[t])
			max = nArr[t];
	}
	int* dp = new int[max + 1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= max; ++i) {
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	}
	while (tmp--)
		std::cout << dp[nArr[tmp]] << "\n";
	delete[] nArr;
	delete[] dp;
	return (0);
}
