/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2441.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:21:07 by jgo               #+#    #+#             */
/*   Updated: 2023/02/20 12:38:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
using namespace std;

void print_star(int n, int con)
{
	const string star = string(n, '*');

	if (n == 0)
		return;
	std::cout << std::right << std::setw(con) << star << std::endl;
	print_star(n - 1, con);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, con;

	cin >> n;
	con = n;
	print_star(n, con);
	return (0);
}