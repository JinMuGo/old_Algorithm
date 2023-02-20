/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2440.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:10:35 by jgo               #+#    #+#             */
/*   Updated: 2023/02/20 12:33:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void print_star(int n)
{
	const string star = string(n, '*');

	if (n == 0)
		return;
	cout << star << "\n";
	print_star(n - 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;

	cin >> n;
	print_star(n);
	return (0);
}