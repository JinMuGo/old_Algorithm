/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2744.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:38:24 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 21:45:15 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

#define DIFF 32

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	char tmp;
	int i;

	cin >> str;
	i = 0;
	while (i < str.size())
	{
		if (str[i] <= 'Z')
			tmp = str[i] + DIFF;
		else
			tmp = str[i] - DIFF;
		i++;
		cout << tmp;
	}

	return (0);
}
