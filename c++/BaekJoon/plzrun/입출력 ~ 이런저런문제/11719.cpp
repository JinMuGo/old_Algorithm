/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11719.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:26:33 by jgo               #+#    #+#             */
/*   Updated: 2023/02/19 10:42:38 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    while (true)
    {
        getline(cin, line);
        if (cin.eof())
            break;
        cout << line << endl;
    }

    return (0);
}