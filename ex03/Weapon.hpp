/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:35:43 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/13 13:43:19 by lgasqui          ###   ########.fr       */
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