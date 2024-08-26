/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:47:05 by lps               #+#    #+#             */
/*   Updated: 2024/08/20 10:47:09 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int N = 3;
	
	horde = zombieHorde(N, "Horde");
 	for (int i = 0; i < N; i++)
	{
       std::cout << "Index " << i << ": ";
	   horde[i].announce();
    }

	delete[] horde;
	return (0);
}
