/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:30:39 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:30:40 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat& other);
	~Cat();

	Cat& operator=(const Cat& rhs);

	void	makeSound() const;
	
};

#endif
