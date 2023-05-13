/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11720.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:44:32 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 11:12:22 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int cal(int t, string tmp)
{
	int sum, i;

	sum = 0;
	i = -1;
	while (++i < t)
		sum += tmp[i] - '0';
	return (sum);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, sum;
	string str;

	cin >> t;
	cin >> str;
	sum = cal(t, str);
	cout << sum;
	return (0);
}