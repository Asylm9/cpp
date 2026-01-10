/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:31:52 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:31:53 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:

	Animal();
	Animal(const Animal& other);
	virtual ~Animal();

	Animal& operator=(const Animal& rhs);

	std::string		getType() const;
	virtual void	makeSound() const;

	protected:

	std::string type;
	
};

#endif
