/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10952.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:00:30 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 10:01:20 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;

    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << a + b << "\n";
    }
    return (0);
}