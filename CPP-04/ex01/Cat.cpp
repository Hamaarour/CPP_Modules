/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:36:41 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/07 15:20:59 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    setType("Cat");
    std::cout << this->type_ << " Default Constructor called" << std::endl;
    this->brain_ = new Brain();
}

Cat::Cat(const Cat &src)
{
    std::cout << this->type_ << " Copy constructor called" << std::endl;
    this->brain_ = NULL;
    *this = src;
    
}

Cat &  Cat::operator=(Cat const &rhs)
{
    std::cout << " Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->type_ = rhs.type_;
        delete brain_;
        this->brain_ = new Brain(*rhs.brain_);
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type_ << " Destructor called" << std::endl;
    delete this->brain_;
}
