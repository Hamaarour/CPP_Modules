/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:01:32 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/30 23:51:12 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name):_Name(name), ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->Name = name + "_clap_name";
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(){
     std::cout << "Default constructor called" << std::endl;   
}

DiamondTrap::DiamondTrap(DiamondTrap const & rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    if(this != &rhs)
        *this = rhs;
     return (*this);
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_Name = rhs._Name;
        this->Hitpoints = rhs.Hitpoints;
        this->Energy_points = rhs.Energy_points;
        this->Attack_damage = rhs.Attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    DiamondTrap::whoAmI(void){
    std::cout << "DiamondTrap Name: " << this->_Name << std::endl;
    std::cout << "ClapTrap Name: " << this->Name << std::endl;
}

