/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11053.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:56:15 by jgo               #+#    #+#             */
/*   Updated: 2023/06/05 10:33:22 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int	main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	short n, max;

	std::cin >> n;

	std::vector<short> arr(n);
	std::vector<short> dp(n);

	for (short i = 0; i < n; ++i)
		std::cin >> arr[i];

	dp[0] = 1;
	for (short i = 1; i < n; ++i)
	{
		max = 0;
		for (short j = i - 1; j >= 0; --j)
		{
			if (arr[i] > arr[j] && dp[j] > max)
				max = dp[j];
		}
		dp[i] = max + 1;
	}

	std::cout << *std::max_element(dp.begin(), dp.end()) << std::endl;

	return (0);
}