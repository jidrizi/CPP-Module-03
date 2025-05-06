/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:05:57 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 16:40:29 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap fragTest("FRAGTEST");
	ScavTrap scavTest("SCAVTEST");

	std::cout << std::endl << "Just doing some standart tests" << std::endl;
	fragTest.attack("SCAVTEST");
	scavTest.takeDamage(30);
	scavTest.attack("FRAGTEST");
	fragTest.takeDamage(20);
	fragTest.beRepaired(10);
	scavTest.beRepaired(5);
	std::cout << std::endl << "More specific tests now" << std::endl;
	fragTest.highFivesGuys();
	fragTest.takeDamage(100);
	fragTest.highFivesGuys();
	fragTest.attack("SCAVTEST");
	fragTest.takeDamage(100);
	fragTest.beRepaired(100);
	return (0);
}