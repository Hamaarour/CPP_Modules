/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:34:05 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/01 01:05:07 by hamaarou         ###   ########.fr       */
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
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = rhs;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
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

void    ScavTrap::attack(std::string const & target)
{
    if (this->Energy_points > 0 || this->Hitpoints > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points -= 1;
    }
    else
        std::cout << "ScavTrap " << this->Name << " has no Energy_points to attack " << target << std::endl;
    
}

