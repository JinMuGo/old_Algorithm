/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2420.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:55:04 by jgo               #+#    #+#             */
/*   Updated: 2023/01/21 11:59:26 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	long sub[2];

	cin >> sub[0] >> sub[1];
	cout << abs(sub[0] - sub[1]) << "\n";
	return (0);
}