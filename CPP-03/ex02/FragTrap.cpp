/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:40:34 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/01 01:05:47 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
    std::cout << "FragTrap" << this->Name << " Parametric constructor called" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->Name = rhs.Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return (*this);
}

FragTrap::FragTrap(FragTrap const & rhs)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = rhs;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap" << this->Name <<  " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
   if (this->Energy_points > 0)
        std::cout << "FragTrap" << this->Name << " high fives" << std::endl;
    else
        std::cout << "FragTrap" << this->Name << " is dead" << std::endl;
    
}