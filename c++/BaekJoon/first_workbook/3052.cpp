/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3052.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:52:07 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 18:58:31 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[42];
    int answer;
    int num;
    int i;

    i = 0;
    bzero(arr, sizeof(int) * 42);
    answer = 0;
    while (i < 10)
    {
        cin >> num;
        arr[num % 42]++;
        i++;
    }
    i = 0;
    while (i < 42)
    {
        if (arr[i])
            answer++;
        i++;
    }
    cout << answer;

    return (0);
}