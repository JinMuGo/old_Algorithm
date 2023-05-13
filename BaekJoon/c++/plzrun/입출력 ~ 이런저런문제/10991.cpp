/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10991.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:33:04 by jgo               #+#    #+#             */
/*   Updated: 2023/05/13 11:49:50 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void prtStar(const int N, int L) {
	if (L == N + 1)
		return;
	for (int i = 0; i < N - L; ++i)
		std::cout << " ";
	for (int i = 0; i < L * 2 - 1; ++i) {
		if (i % 2)
			std::cout << " ";
		else
			std::cout << "*";
	}
	std::cout << "\n";
	prtStar(N, L + 1);
}

int main(void) {
	int N;

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N;

	prtStar(N, 1);

	return (0);
}
