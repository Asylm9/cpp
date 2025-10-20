/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaland <agaland@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:14:47 by agaland           #+#    #+#             */
/*   Updated: 2025/10/20 14:48:48 by agaland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{

	std::cout << "----------EX05---------" << std::endl;
	
	Harl harl;

    harl.complain("DEBUG");
	
    harl.complain("INFO");
    
	harl.complain("WARNING");
    
	harl.complain("ERROR");
    
	harl.complain("invalid");

	std::cout << std::endl;
	std::cout << "‧₊˚❀༉‧₊˚. Shut up HARL ‧₊˚❀༉‧₊˚." << std::endl;

	return 0;
}
