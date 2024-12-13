/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:07:52 by lgasqui           #+#    #+#             */
/*   Updated: 2024/12/13 12:42:43 by lgasqui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif