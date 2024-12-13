/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:35:41 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/13 13:43:08 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string &Weapon::getType() const
{
	return (_type);
}