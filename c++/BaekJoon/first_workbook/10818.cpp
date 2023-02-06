/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10818.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:14:09 by jgo               #+#    #+#             */
/*   Updated: 2023/01/29 11:29:09 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    size_t N;
    int elem;
    int answer[2];

    cin >> N;
    answer[0] = -1000001;
    answer[1] = 1000001;
    while (N)
    {
        cin >> elem;
        if (elem > answer[0])
            answer[0] = elem;
        if (elem < answer[1])
            answer[1] = elem;
        N--;
    }
    cout << answer[1] << " " << answer[0] << endl;
    return (0);
}