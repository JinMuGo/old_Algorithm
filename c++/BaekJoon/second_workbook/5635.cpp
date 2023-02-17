/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5635.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 09:53:53 by jgo               #+#    #+#             */
/*   Updated: 2023/02/17 12:10:18 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

typedef struct people
{
	string name;
	int year;
	int month;
	int day;
} t_people;

void init_max(t_people &people)
{
	people.year = 2011;
	people.month = 13;
	people.day = 32;
}

void cmp_max(t_people &max, t_people tmp)
{
	if (max.year > tmp.year)
	{
		max = tmp;
		return;
	}
	else if (max.year == tmp.year)
	{
		if (max.month > tmp.month)
		{
			max = tmp;
			return;
		}
		else if (max.month == tmp.month)
		{
			if (max.day > tmp.day)
			{
				max = tmp;
				return;
			}
		}
	}
}

void cmp_min(t_people &min, t_people tmp)
{
	if (min.year < tmp.year)
	{
		min = tmp;
		return;
	}
	else if (min.year == tmp.year)
	{
		if (min.month < tmp.month)
		{
			min = tmp;
			return;
		}
		else if (min.month == tmp.month)
		{
			if (min.day < tmp.day)
			{
				min = tmp;
				return;
			}
		}
	}
}

// 연도,달,일 이 같을 때는 생각하지 않았음. 그래서 헷갈렸다.
// 확실히 코드를 짜기 이전에 생각하는 시간을 충분히 들여야할 것 같다.
// 그러지 않으니까. max가 큰것으로 인식하여 더 나이가 큰 것으로 알았다.
// 나이는 연도가 작으면 작을 수록 큰데 그것을 알지 못했다.
//  (1990 ≤ yyyy ≤ 2010, 1 ≤ mm ≤ 12, 1 ≤ dd ≤ 31)
//  "이름 dd mm yyyy
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	t_people min;
	t_people max;
	t_people tmp;

	init_max(max);
	bzero(&min, sizeof(t_people));
	cin >> N;
	while (N)
	{
		cin >> tmp.name >> tmp.day >> tmp.month >> tmp.year;
		cmp_min(min, tmp);
		cmp_max(max, tmp);
		N--;
	}
	cout << min.name << "\n"
		 << max.name;
	return (0);
}
