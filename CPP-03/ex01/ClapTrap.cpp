/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:20:42 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/01 02:05:43 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Empty"), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hitpoints(100), Energy_points(50), Attack_damage(20)
{
    std::cout << "ClapTrap Parametric constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = rhs;
    
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    if (this->Energy_points > 0 && this->Hitpoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points -= 1;
    }
    else
        std::cout << "ClapTrap " << this->Name << " has no Energy_points to attack " << target << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hitpoints > 0 && amount > 0 && amount < this->Hitpoints )
    {
        std::cout << "ClapTrap " << this->Name << " take " << amount << " points of damage!" << std::endl;
        this->Hitpoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is already dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hitpoints > 0 && this->Energy_points > 0 && amount > 0 && amount < this->Energy_points)
    {
        std::cout << "ClapTrap " << this->Name << " beRepaired with " << amount << " points of Energy_points!" << std::endl;
        this->Energy_points -= 1;
        this->Hitpoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is already dead" << std::endl;
}


