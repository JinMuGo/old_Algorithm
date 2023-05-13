/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10809.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:25:09 by jgo               #+#    #+#             */
/*   Updated: 2023/02/05 14:33:04 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
using namespace std;

#define A 97

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	int ans[26];
	int i;

	memset(ans, -1, sizeof(int) * 26);
	cin >> str;
	i = 0;
	while (i < str.size())
	{
		if (ans[str[i] - A] == -1)
			ans[str[i] - A] = i;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		cout << ans[i] << " ";
		i++;
	}

	return (0);
}