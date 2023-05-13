/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1408.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:15:17 by jgo               #+#    #+#             */
/*   Updated: 2023/02/17 14:54:39 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

// 숫자가 2자리가 아닐 경우에는 0으로 채운다.

typedef struct time
{
    int hour;
    int minute;
    int second;
} t_time;

void diff_time(t_time &start, t_time &cur)
{
    cur.second -= start.second;
    if (cur.second < 0)
    {
        cur.second += 60;
        cur.minute -= 1;
    }
    cur.minute -= start.minute;
    if (cur.minute < 0)
    {
        cur.minute += 60;
        cur.hour -= 1;
    }
    cur.hour -= start.hour;
}

void init_cur(t_time &start, t_time &cur)
{
    if (cur.hour < start.hour)
        cur.hour += 24;
}

void init_day(t_time &tmp)
{
    tmp.hour = 24;
    tmp.minute = 0;
    tmp.second = 0;
}

void print_ans(t_time &ans)
{
    if (ans.hour < 10)
        cout << "0" << ans.hour << ":";
    else
        cout << ans.hour << ":";
    if (ans.minute < 10)
        cout << "0" << ans.minute << ":";
    else
        cout << ans.minute << ":";
    if (ans.second < 10)
        cout << "0" << ans.second;
    else
        cout << ans.second;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    t_time cur;
    t_time start;
    t_time day;

    scanf("%d:%d:%d\n", &cur.hour, &cur.minute, &cur.second);
    scanf("%d:%d:%d", &start.hour, &start.minute, &start.second);

    init_cur(start, cur);
    diff_time(start, cur);
    init_day(day);
    diff_time(cur, day);
    if (day.hour >= 24)
        day.hour -= 24;
    print_ans(day);
    return (0);
}