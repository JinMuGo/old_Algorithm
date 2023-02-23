/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2522.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:24:49 by jgo               #+#    #+#             */
/*   Updated: 2023/02/23 10:43:43 by jgo              ###   ########.fr       */
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
	char line[width + 2];
	int tmp;
	int empty;
	int i;

	if (L == height + 1)
		return;
	if (L > width)
		tmp = height - L + 1;
	else
		tmp = L;
	empty = width - tmp;
	i = 0;
	while (i < width)
	{
		if (i < empty)
			line[i] = ' ';
		else
			line[i] = '*';
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
	int n, height, width;

	cin >> n;
	height = cal(n);
	width = n;
	print_star(1, n, width, height);

	return (0);
}