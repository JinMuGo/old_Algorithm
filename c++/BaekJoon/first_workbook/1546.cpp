/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1546.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:57:25 by jgo               #+#    #+#             */
/*   Updated: 2023/02/05 14:23:31 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, i;
    float max = 0;
    float tmp;
    float sum = 0;

    cin >> N;
    i = 0;
    while (i < N)
    {
        cin >> tmp;
        sum += tmp;
        if (max < tmp)
            max = tmp;
        i++;
    }

    cout << ((sum / N) / max) * 100;

    return (0);
}