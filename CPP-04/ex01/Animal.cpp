/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:40:06 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 01:02:51 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//------------------ Constructors ------------------//
Animal::Animal()
{
    std::cout << "{Animal} Default Constructor called" << std::endl;
    this->setType("Empty");
}

Animal::Animal(Animal const & rhs)
{
    std::cout << "{Animal} Copy Constructor called" << std::endl;
    *this = rhs;
}

//------------------ Overloader ------------------//
Animal & Animal::operator=(Animal const & rhs)
{
    std::cout << "{Animal} Assignation operator called" << std::endl;
    if (this != &rhs)
        this->setType(rhs.getType());
    return (*this);
}
//------------------ Destructor ------------------//
Animal::~Animal(){ std::cout << "{Animal} Destructor called" << std::endl; }

//------------------ Getter && Setter ------------------//
std::string Animal::getType() const{ return (this->type_); }

void Animal::setType(std::string type){ this->type_ = type; }

//------------------ Member function ------------------//

void Animal::makeSound() const{ std::cout << "Animal makeSound" << std::endl; }