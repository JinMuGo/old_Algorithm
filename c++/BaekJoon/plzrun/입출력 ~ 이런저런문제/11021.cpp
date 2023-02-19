/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11021.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:16:34 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 10:18:51 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, i, a, b;

    cin >> t;
    i = 0;
    while (++i <= t)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << endl;
    }

    return (0);
}