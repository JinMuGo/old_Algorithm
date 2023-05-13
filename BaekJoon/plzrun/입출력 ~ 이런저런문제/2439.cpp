/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2439.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:21:07 by jgo               #+#    #+#             */
/*   Updated: 2023/02/20 12:23:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
using namespace std;

void print_star(int L, int n)
{
	const string star = string(L, '*');

	if (L == n + 1)
		return;
	std::cout << std::right << std::setw(n) << star << std::endl;
	print_star(L + 1, n);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;

	cin >> n;
	print_star(1, n);
	return (0);
}