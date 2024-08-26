/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:53:10 by lps               #+#    #+#             */
/*   Updated: 2024/08/20 16:53:12 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		// Constructors
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		// Member functions
		void attack();
};

#endif