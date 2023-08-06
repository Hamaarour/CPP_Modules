/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:51:44 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/05 18:52:31 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this != &rhs)
        this->setType(rhs.getType());
    return (*this);
}

WrongCat::~WrongCat(){ std::cout << "WrongCat Destructor called" << std::endl; }

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat makeSound" << std::endl;
}

void WrongCat::setType(std::string type){ this->_type = type; }

std::string WrongCat::getType() const{ return (this->_type); }
