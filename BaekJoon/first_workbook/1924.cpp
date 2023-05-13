/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1924.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:46:34 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 22:01:22 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    cin >> x >> y;

    i = 0;
    while (++i < x)
        y += month[i];
    cout << day[(y) % 7];

    return (0);
}