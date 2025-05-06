/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:05:57 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 15:53:29 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	test("test");
	ClapTrap	dummy("dummy");

	std::cout << std::endl;
	test.attack("");
	test.attack("dummy");
	dummy.takeDamage(0);
	dummy.beRepaired(0);
	std::cout <<std::endl
		<< "(Now let's try killing one Claptrap and see what happens)"
		<< std::endl;
	test.takeDamage(11);
	test.attack("dummy");
	test.beRepaired(10);
	return (0);
}