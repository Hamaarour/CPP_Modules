/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:15:43 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/11 14:17:53 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon Constructor Called" << std::endl;
    this->_type = type;
}

std::string Weapon::getType(void) const
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon Destructor Called" << std::endl;
}