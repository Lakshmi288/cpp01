/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:54:39 by lps               #+#    #+#             */
/*   Updated: 2024/08/20 16:54:40 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		// Constructors
		Weapon();
		Weapon(std::string type);
		~Weapon();
		
		// Member functions
		void setType(std::string type);
		const std::string &getType() const;
};

#endif