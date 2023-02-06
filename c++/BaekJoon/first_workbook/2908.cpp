/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2908.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 08:59:33 by jgo               #+#    #+#             */
/*   Updated: 2023/02/06 09:05:59 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int reverse_num(int num)
{
	int rv = 0;

	while (num > 0)
	{
		rv = rv * 10 + num % 10;
		num /= 10;
	}
	return (rv);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;

	cin >> a >> b;

	cout << max(reverse_num(a), reverse_num(b));

	return (0);
}