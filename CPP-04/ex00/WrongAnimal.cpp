/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:49:19 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/05 18:54:55 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = rhs;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){ std::cout << "WrongAnimal Destructor called" << std::endl; }

std::string WrongAnimal::getType() const{ return (this->_type); }

void WrongAnimal::setType(std::string type){ this->_type = type; }

void WrongAnimal::makeSound() const{ std::cout << "WrongAnimal makeSound" << std::endl; }
