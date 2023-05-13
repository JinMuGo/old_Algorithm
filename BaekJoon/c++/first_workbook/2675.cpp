/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2675.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:42:17 by jgo               #+#    #+#             */
/*   Updated: 2023/01/21 12:59:36 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int T;
	int R;
	string S;
	int len;
	int i;

	cin >> T;
	while (T)
	{
		cin >> R >> S;
		i = 0;
		while (i < S.length())
		{
			len = R;
			while (len)
			{
				cout << S[i];
				len--;
			}
			i++;
		}
		cout << "\n";
		T--;
	}
	return (0);
}