/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10807.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:05:23 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 19:48:40 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int v;
    int i;
    int num;
    int answer;

    cin >> n;
    int arr[n];
    i = 0;
    answer = 0;
    while (i < n)
    {
        cin >> num;
        arr[i] = num;
        i++;
    }
    cin >> v;
    i = 0;
    while (i < n)
    {
        if (v == arr[i])
            answer++;
        i++;
    }
    cout << answer;

    return (0);
}