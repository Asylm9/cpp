/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:12:20 by agaland           #+#    #+#             */
/*   Updated: 2025/09/02 16:12:21 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

	std::string 	_name;
	Weapon& 		_weapon;

	public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack(void);

};


#endif
