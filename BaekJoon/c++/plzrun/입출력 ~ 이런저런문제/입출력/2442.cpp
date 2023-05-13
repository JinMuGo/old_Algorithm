/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2442.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:40:06 by jgo               #+#    #+#             */
/*   Updated: 2023/02/21 11:31:12 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int cal(int n)
{
	return (2 * n - 1);
}

void print_star(int L, int n, const int width)
{
	const char star = '*';
	const int mid_idx = width / 2;
	const int cal_idx = cal(L) / 2;
	const int start_idx = mid_idx - cal_idx;
	char line[width + 2];
	int i;

	if (L == n + 1)
		return;
	i = -1;
	while (++i <= start_idx + 2 * cal_idx)
	{
		if (start_idx <= i)
			line[i] = star;
		else
			line[i] = ' ';
	}
	line[i] = '\0';
	printf("%s\n", line);
	print_star(L + 1, n, width);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, width;

	cin >> n;
	width = cal(n);
	print_star(1, n, width);

	return (0);
}