/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5597.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:42:32 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 20:47:14 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[31];
    int n;
    int i;

    i = 0;
    memset(arr, 1, sizeof(int) * 31);
    while (i < 28)
    {
        cin >> n;
        arr[n] = 0;
        i++;
    }
    i = 1;
    while (i < 31)
    {
        if (arr[i])
            cout << i << endl;
        i++;
    }

    return (0);
}