/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1357.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:02:14 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 22:22:40 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
// use string

int rev(int num)
{
    int tmp = 0;

    while (num > 0)
    {
        tmp = tmp * 10 + num % 10;
        num /= 10;
    }

    return (tmp);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;

    cin >> x >> y;

    cout << rev(rev(x) + rev(y));

    return (0);
}