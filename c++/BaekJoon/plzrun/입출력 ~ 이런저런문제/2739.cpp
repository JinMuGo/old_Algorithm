/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2739.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:03:59 by jgo               #+#    #+#             */
/*   Updated: 2023/02/20 12:05:58 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void gugudan(int n, int L)
{
	if (L == 10)
		return;
	printf("%d * %d = %d\n", n, L, n * L);
	gugudan(n, L + 1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;

	cin >> n;
	gugudan(n, 1);

	return (0);
}