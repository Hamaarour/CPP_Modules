/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:40:06 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 01:02:51 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//------------------ Constructors ------------------//
AAnimal::AAnimal()
{
    std::cout << "{AAnimal} Default Constructor called" << std::endl;
    this->setType("Empty");
}

AAnimal::AAnimal(AAnimal const & rhs)
{
    std::cout << "{AAnimal} Copy Constructor called" << std::endl;
    *this = rhs;
}

//------------------ Overloader ------------------//
AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
    std::cout << "{AAnimal} Assignation operator called" << std::endl;
    if (this != &rhs)
        this->setType(rhs.getType());
    return (*this);
}
//------------------ Destructor ------------------//
AAnimal::~AAnimal(){ std::cout << "{AAnimal} Destructor called" << std::endl; }

//------------------ Getter && Setter ------------------//
std::string AAnimal::getType() const{ return (this->type_); }

void AAnimal::setType(std::string type){ this->type_ = type; }

//------------------ Member function ------------------//

void AAnimal::makeSound() const{ std::cout << "Animal makeSound" << std::endl; }