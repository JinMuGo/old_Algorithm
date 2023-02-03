/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1357.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:02:14 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 22:17:37 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
// use string

string rev(string str)
{
    char c;
    int i = 0;
    int end_idx = str.size() - 1;

    while (i < str.size() / 2)
    {
        swap(str[i], str[end_idx - i]);
        i++;
    }
    return to_string(stoi(str));
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x, y;

    cin >> x >> y;
    cout << rev(to_string(stoi(rev(x)) + stoi(rev(y))));

    return (0);
}