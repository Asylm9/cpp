/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:09:59 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:10:01 by agaland          ###   ########.fr       */
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

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
