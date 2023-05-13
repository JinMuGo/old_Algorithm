/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2742.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:59:48 by jgo               #+#    #+#             */
/*   Updated: 2023/02/20 12:01:05 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void print_num(int n)
{
	if (!n)
		return;
	cout << n << "\n";
	print_num(n - 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;

	cin >> n;
	print_num(n);
	return (0);
}