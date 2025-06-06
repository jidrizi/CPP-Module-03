/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:45:11 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 15:48:46 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Named constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0 && !target.empty())
	{
		std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0)
		std::cout << name << " is dead and cannot attack." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << name << " has no energy left to attack." << std::endl;
	else if (target.empty())
		std::cout << name << " has no target to attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		if (amount >= this->hitPoints)
			this->hitPoints = 0;
		else
			this->hitPoints -= amount;
		std::cout << name << " takes " << amount
			<< " points of damage! Hit points left: "
			<< this->hitPoints << std::endl;
	}
	else
		std::cout << name << " is already dead and can't take more damage."
			<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << name << " is repaired for " << amount
			<< " hit points! Hit points now: "
			<< this->hitPoints << std::endl;
	}
	else if (this->hitPoints <= 0)
		std::cout << name << " is dead and cannot be repaired." << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << name << " has no energy left to be repaired." << std::endl;
}
