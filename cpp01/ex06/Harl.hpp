/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:15:39 by agaland           #+#    #+#             */
/*   Updated: 2025/09/03 01:56:28 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

};

#endif
