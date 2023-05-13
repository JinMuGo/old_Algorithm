/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11718.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:11:50 by jgo               #+#    #+#             */
/*   Updated: 2023/01/21 11:24:36 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	while (true)
	{
		getline(std::cin, str);
		if (str == "")
			break;
		std::cout << str << "\n";
	}
	return (0);
}