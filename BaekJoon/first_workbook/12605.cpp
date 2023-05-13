/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12605.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:33:41 by jgo               #+#    #+#             */
/*   Updated: 2023/01/29 09:13:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> vec;
    string str;
    string tmp;
    int T;
    int idx;
    int i;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    cin.ignore();
    idx = 0;
    while (idx < T)
    {
        i = 0;
        getline(cin, str);
        while (i <= str.length())
        {
            if (str[i] == ' ' || str[i] == '\0')
            {
                vec.push_back(tmp);
                tmp.clear();
            }
            else
                tmp += str[i];
            i++;
        }
        i = vec.size();
        cout << "Case #" << idx + 1 << ": ";
        while (--i >= 0)
            cout << vec[i] << " ";
        cout << endl;
        vec.clear();
        idx++;
    }
    return (0);
}