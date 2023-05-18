/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10844.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:19:22 by jgo               #+#    #+#             */
/*   Updated: 2023/05/18 12:35:42 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <numeric>
#include <vector>

static auto modulo = [](const int acc, const int prev) {
	 return (acc + prev) % 1000000000; 
};

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, res;

	std::vector<std::vector<int > > dp(101, std::vector<int>(10));
	std::fill(dp[0].begin(), dp[0].end(), 1);
	dp[0][0] = 0;

	std::cin >> n;
	for (int i = 1; i < n; ++i) {
		dp[i][0] = (dp[i - 1][1]) % 1000000000;
		for (int j = 1; j < 9; ++j)
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		dp[i][9] = (dp[i - 1][8]) % 1000000000;
	}

	res = std::accumulate(dp[n - 1].begin(), dp[n - 1].end(), 0, modulo);
	std::cout << res << std::endl;

	return (0);
}
