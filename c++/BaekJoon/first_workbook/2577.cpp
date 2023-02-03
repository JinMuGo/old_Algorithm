/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2577.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:28:12 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 18:49:36 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

#define A 0
#define B 1
#define C 2

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> input;
    int arr[10];
    int num;
    string str;
    int i;

    bzero(arr, sizeof(int) * 10);
    i = 0;
    while (i < 3)
    {
        cin >> num;
        input.push_back(num);
        i++;
    }
    num = input[A] * input[B] * input[C];
    str = to_string(num);
    i = 0;
    while (i < str.size())
    {
        num = str[i] - '0';
        arr[num]++;
        i++;
    }
    i = 0;
    while (i < 10)
    {
        cout << arr[i] << endl;
        i++;
    }

    return (0);
}