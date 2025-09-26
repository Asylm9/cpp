/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:08:23 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:08:24 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:

	std::string _name;

	public :

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif
