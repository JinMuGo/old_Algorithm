/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9086.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:01:05 by jgo               #+#    #+#             */
/*   Updated: 2023/01/22 19:03:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	string str;
	size_t len;
	int T;

	cin >> T;
	while (T)
	{
		cin >> str;
		len = str.length();
		cout << str[0] << str[len - 1] << "\n";

		T--;
	}
	return (0);
}