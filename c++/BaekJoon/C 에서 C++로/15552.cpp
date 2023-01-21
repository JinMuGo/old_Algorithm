/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15552.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:27:19 by jgo               #+#    #+#             */
/*   Updated: 2023/01/21 10:44:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	int n;
	int i;
	int sum[2];
	int *arr;

	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> n;
	arr = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		std::cin >> sum[0] >> sum[1];
		arr[i] = sum[0] + sum[1];
		i++;
	}
	i = -1;
	while (++i < n)
		std::cout << arr[i] << "\n";
	return (0);
}