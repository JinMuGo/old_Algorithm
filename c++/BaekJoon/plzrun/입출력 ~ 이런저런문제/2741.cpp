/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2741.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:33:00 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 11:34:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, i;

	cin >> n;
	i = 0;
	while (++i <= n)
		cout << i << "\n";
	return (0);
}
