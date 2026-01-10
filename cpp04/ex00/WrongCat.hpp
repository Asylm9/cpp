/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 23:51:53 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 01:40:51 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(const WrongCat& other);
	~WrongCat();

	WrongCat& operator=(const WrongCat& rhs);

	void	makeSound() const;
	
};

#endif
