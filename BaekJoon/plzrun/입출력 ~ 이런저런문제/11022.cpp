/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11022.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:20:26 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 10:23:10 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, i, a, b;

	i = 0;
	cin >> t;
	while (++i <= t)
	{
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

	return (0);
}