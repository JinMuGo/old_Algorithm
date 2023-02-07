/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1977.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:56:32 by jgo               #+#    #+#             */
/*   Updated: 2023/02/07 23:42:40 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N, i;
    int min, sum;
    int sm, sn;
    int tmp;

    cin >> M >> N;
    sm = sqrt(M);
    sn = sqrt(N);
    min = 0;
    sum = 0;
    i = sm;
    while (i <= sn)
    {
        tmp = pow(i, 2);
        if (M <= tmp && tmp <= N)
        {
            if (min == 0)
                min = tmp;
            sum += tmp;
        }
        i++;
    }
    if (sum && min)
        cout << sum << "\n"
             << min;
    else
        cout << -1;
    return (0);
}