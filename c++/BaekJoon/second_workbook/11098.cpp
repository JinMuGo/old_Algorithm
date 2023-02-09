/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11098.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:39:42 by jgo               #+#    #+#             */
/*   Updated: 2023/02/09 09:51:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p;
    string c;
    int tmp;
    int max;
    string s_max;

    cin >> n;
    while (n)
    {
        cin >> p;
        max = 0;
        while (p)
        {
            cin >> tmp >> c;
            if (tmp > max)
            {
                max = tmp;
                s_max = c;
            }
            p--;
        }
        cout << s_max << endl;
        n--;
    }

    return (0);
}