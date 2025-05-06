/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:05:57 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 15:26:20 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scavTest("scavTest");
	ClapTrap	clapTest("clapTest");

	std::cout << std::endl
		<< "(Now let's try attacking with ScavTrap and see what happens)"
		<< std::endl;
	scavTest.attack("clapTest");
	clapTest.takeDamage(20);
	clapTest.beRepaired(10);

	std::cout << std::endl
		<< "(Now let's try more stuff with ScavTrap and see what happens)"
		<< std::endl;
	scavTest.guardGate();
	scavTest.guardGate();
	scavTest.takeDamage(15);
	scavTest.beRepaired(15);
	scavTest.takeDamage(100);
	scavTest.guardGate();
	scavTest.attack("clapTest");

	return (0);
}