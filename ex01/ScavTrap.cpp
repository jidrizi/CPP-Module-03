/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:36:14 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 15:43:00 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Default ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->gateKeeperMode = false;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->gateKeeperMode = false;
	std::cout << "Named ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		this->gateKeeperMode = other.gateKeeperMode;
	}
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0 && !target.empty())
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0)
		std::cout << "ScavTrap" << this->name << " is dead and cannot attack."
			<< std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ScavTrap" << this->name << " has no energy left to attack."
			<< std::endl;
	else if (target.empty())
		std::cout << "ScavTrap" << this->name <<  " has no target to attack."
			<< std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->hitPoints > 0 && !this->gateKeeperMode)
	{
		this->gateKeeperMode = true;
		std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode."
			<< std::endl;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap" << this->name << " is dead and cannot enter Gate Keeper mode."
			<< std::endl;
	}
	else if (this->gateKeeperMode)
	{
		std::cout << "ScavTrap " << this->name << " is already in Gate Keeper mode."
			<< std::endl;
	}
}
