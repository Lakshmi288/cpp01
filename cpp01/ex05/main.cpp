/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:55:36 by lps               #+#    #+#             */
/*   Updated: 2024/08/20 16:55:38 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	std::cout << std::endl << "------ DEBUG Level ------" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "------ INFO Level ------" << std::endl;;
	harl.complain("INFO");
	std::cout << std::endl << "------ WARNING Level ------" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "------ ERROR Level ------" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "------ No valid Level ------" << std::endl;
	harl.complain("ALARM");
	return (0);
}
