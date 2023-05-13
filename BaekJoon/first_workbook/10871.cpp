/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10871.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:39:05 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 20:41:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, i, num;

    cin >> n >> x;
    i = 0;
    while (i < n)
    {
        cin >> num;
        if (num < x)
            cout << num << " ";
        i++;
    }

    return (0);
}