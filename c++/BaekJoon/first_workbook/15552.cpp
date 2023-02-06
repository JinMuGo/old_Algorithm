/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15552.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:27:19 by jgo               #+#    #+#             */
/*   Updated: 2023/01/21 10:58:50 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int n;
	int sum[2];

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cin >> n;

	for(int i = 0; i < n; i++)
	{
		std::cin >> sum[0] >> sum[1];
		std::cout << sum[0] + sum[1] << "\n";
	}
	return (0);
}