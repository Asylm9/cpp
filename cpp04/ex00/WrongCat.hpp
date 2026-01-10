/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:31:18 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:31:19 by agaland          ###   ########.fr       */
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
