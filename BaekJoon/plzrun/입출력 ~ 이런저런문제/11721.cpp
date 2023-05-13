/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11721.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:13:18 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 11:32:04 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int i;

	cin >> str;
	i = -1;
	while (++i < str.size())
	{
		cout << str[i];
		if (i % 10 == 9)
			cout << "\n";
	}
	return (0);
}