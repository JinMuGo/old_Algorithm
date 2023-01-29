/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10951.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:32:09 by jgo               #+#    #+#             */
/*   Updated: 2023/01/21 11:48:49 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	int sum[2];
	int i;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (cin >> sum[0] >> sum[1])
		cout << sum[0] + sum[1] << "\n";
	return (0);
}