/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8393.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:08:28 by jgo               #+#    #+#             */
/*   Updated: 2023/02/20 12:09:33 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int sum = 0;

	cin >> n;
	while (n)
		sum += n--;
	cout << sum;
	return (0);
}