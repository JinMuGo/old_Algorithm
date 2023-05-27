/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2156.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:56:52 by jgo               #+#    #+#             */
/*   Updated: 2023/05/27 10:45:59 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n;

	std::cin >> n;

	std::vector<int> arr(n);
	std::vector<int> dp(n);
	for (int i = 0; i < n; ++i)
		std::cin >> arr[i];
	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = std::max({arr[0] + arr[1], arr[1] + arr[2], arr[0] + arr[2]});

	for (int i = 3; i < n; ++i) {
		dp[i] = std::max(
			{dp[i - 2] + arr[i], arr[i - 1] + dp[i - 3] + arr[i], dp[i - 1]});
	};

	std::cout << dp[n - 1] << std::endl;

	return (0);
}