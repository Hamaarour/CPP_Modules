/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:34:05 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/22 22:21:27 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    std::cout << "ScavTrap Parametric constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = rhs;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    ClapTrap::operator=(rhs);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap" << this->Name << "is now in Gate keeper mode." << std::endl;
}

