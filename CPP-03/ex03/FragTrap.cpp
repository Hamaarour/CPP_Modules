/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:40:34 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/22 22:52:24 by hamaarou         ###   ########.fr       */
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