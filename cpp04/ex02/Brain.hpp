/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:33:02 by agaland           #+#    #+#             */
/*   Updated: 2026/01/10 20:33:03 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define SIZE 100

class Brain
{
	public:

	Brain();
	Brain(const Brain& other);
	~Brain();

	Brain& operator=(const Brain& rhs);

	std::string		getIdeas() const;
	void			setIdeas(std::string value, int i);

	private:

	std::string _ideas[100];
	
};

#endif
