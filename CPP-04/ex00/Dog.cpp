/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:07:45 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/04 18:57:06 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    setType("Dog");
    std::cout << this->_type << " Default Constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    std::cout << this->_type << " Copy constructor called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << " Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->_type << " Destructor called" << std::endl;
}
