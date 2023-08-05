/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:36:41 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/04 18:56:24 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    setType("Cat");
    std::cout << this->_type << " Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    std::cout << this->_type << " Copy constructor called" << std::endl;
    *this = src;
}

Cat &  Cat::operator=(Cat const &rhs)
{
    std::cout << " Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->_type << " Destructor called" << std::endl;
}
