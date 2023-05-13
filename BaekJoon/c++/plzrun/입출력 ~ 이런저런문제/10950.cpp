/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10950.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:55:56 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 09:58:44 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, b;

	cin >> t;
	while(t)
	{
		cin >> a >> b;
		cout << a + b << "\n";
		t--;
	}
	return (0);
}