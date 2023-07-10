/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:14:26 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/07 13:14:26 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " is died" << std::endl;
}

std::string Zombie::getName(void)
{
    return (this->_name);
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

