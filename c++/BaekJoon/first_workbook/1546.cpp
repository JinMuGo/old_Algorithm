/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1546.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:57:25 by jgo               #+#    #+#             */
/*   Updated: 2023/02/05 14:21:28 by jgo              ###   ########.fr       */
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
    vector<int> input;
    vector<float> arr;

    cin >> N;
    i = 0;
    while (i < N)
    {
        cin >> tmp;
        if (max < tmp)
            max = tmp;
        input.push_back(tmp);
        i++;
    }
    i = 0;
    while (i < N)
    {
        tmp = (float)((float)input[i] / max) * 100;
        arr.push_back(tmp);
        i++;
    }
    float sum = 0;
    i = 0;
    while (i < N)
    {
        sum += arr[i];
        i++;
    }

    cout << sum / N;

    return (0);
}