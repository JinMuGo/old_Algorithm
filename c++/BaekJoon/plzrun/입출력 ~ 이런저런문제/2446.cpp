/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2446.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:32:22 by jgo               #+#    #+#             */
/*   Updated: 2023/02/23 10:22:23 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int cal(const int n)
{
	return (2 * n - 1);
}

void print_star(int L, int n, const int width, const int height)
{
	const char star = '*';
	char line[width + 2];
	int end_idx;
	int tmp;
	int i;

	if (L == height + 1)
		return;
	if (L > width / 2)
		tmp = width - L;
	else
		tmp = L;
	end_idx = width - 1 - tmp;
	i = 0;
	while (i <= end_idx)
	{
		if (i + 1 < tmp)
			line[i] = ' ';
		else
			line[i] = star;
		i++;
	}
	line[i] = '\n';
	line[i + 1] = '\0';
	printf("%s", line);
	print_star(L + 1, n, width, height);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, width, height;

	cin >> n;
	width = n * 2;
	height = cal(n);
	print_star(1, n, width, height);

	return (0);
}