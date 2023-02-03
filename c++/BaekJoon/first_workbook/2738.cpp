/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2738.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:47:59 by jgo               #+#    #+#             */
/*   Updated: 2023/02/03 21:31:47 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
using namespace std;

void input_NbyM(int n, int m, vector< vector<int> > &arr)
{
    int i, j, num;
    vector<int> tmp;

    i = 0;
    while (i < n)
    {
        j = 0;
        tmp.clear();
        while (j < m)
        {
            cin >> num;
            tmp.push_back(num);
            j++;
        }
        arr.push_back(tmp);
        i++;
    }
}

void    nbym_add(int n, int m, vector< vector<int> > &a, vector< vector<int> > &b)
{
    int i,j;

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            cout << a[i][j] + b[i][j] << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    vector< vector<int> > a, b;

    cin >> n >> m;
    input_NbyM(n, m, a);
    input_NbyM(n, m, b);
    nbym_add(n, m, a, b);
    return (0);
}