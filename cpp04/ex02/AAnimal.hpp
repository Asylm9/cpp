/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:32:56 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:32:57 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public:

	AAnimal();
	AAnimal(const AAnimal& other);
	virtual ~AAnimal();

	AAnimal& operator=(const AAnimal& rhs);

	std::string		getType() const;
	virtual void	makeSound() const = 0;

	protected:

	std::string type;
	
};

#endif
