/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:07:45 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/07 02:43:43 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    setType("Dog");
    std::cout << this->type_ << " Default Constructor called" << std::endl;
    this->brain_ = new Brain();
}

Dog::Dog(Dog const &src)
{
    std::cout << this->type_ << " Copy constructor called" << std::endl;
    this->brain_ = NULL;
    *this = src;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << " Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        this->brain_ = new Brain(*rhs.brain_);
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type_ << " Destructor called" << std::endl;
    delete this->brain_;
}
