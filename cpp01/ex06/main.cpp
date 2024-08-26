/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:26:08 by lps               #+#    #+#             */
/*   Updated: 2024/08/20 17:26:10 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
	std::string level;
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (0);
	}
	level = argv[1];
	harl.complain(level);
	return (0);
}
