/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:21:42 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 16:38:26 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	std::cout << "FragTrap assignment operator called" << std::endl;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hitPoints > 0)
	{
		std::cout << "Pause!" <<std::endl
			<< "FragTrap  "<< this->name << " is readying his hand and requesting a high five!"
			<< std::endl;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead and can't high five from the grave!"
			<< std::endl;
	} 
}

void	FragTrap::attack(std::string const &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target
			<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << "FragTrap " << this->name << " is dead and can't attack!"
		<< std::endl;
	}
	else if (this->energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->name << " is out of energy and can't attack!"
		<< std::endl;
	}
}
