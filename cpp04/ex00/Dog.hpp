/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:30:49 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:30:50 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:

	Dog();
	Dog(const Dog& other);
	~Dog();

	Dog& operator=(const Dog& rhs);

	void	makeSound() const;
	
};

#endif
