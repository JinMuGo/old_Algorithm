/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10807.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:05:23 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 19:56:51 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <strings.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int v;
    int i;
    int num;
    int arr[201];

    cin >> n;
    i = 0;
    bzero(arr, sizeof(int) * 201);
    while (i < n)
    {
        cin >> num;
        arr[num + 100]++;
        i++;
    }
    cin >> v;
    cout << arr[v + 100];
    return (0);
}