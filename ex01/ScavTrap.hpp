/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:36:02 by jidrizi           #+#    #+#             */
/*   Updated: 2025/05/06 15:09:43 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : protected ClapTrap
{
	private:
		bool gateKeeperMode;

	public: 
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		virtual	~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &other);

		void	attack(const std::string& target);
		void	guardGate();
	
};

#endif