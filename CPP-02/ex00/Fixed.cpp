/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:59:04 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/20 08:18:46 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    /*
        The *this expression is used to dereference the current object,
    allowing you to assign the values from src to the object being
    constructed.
        that this is a pointer to the current object, while *this is
    the dereferenced object itself. In this context, you need to 
    dereference this to access and modify the object itself when using
    the assignment operator.
    */
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &src){
    std::cout << "Assignation operator called" << std::endl;
    //This check is necessary to avoid unnecessary work when an object is assigned to itself,
    if (this != &src)
        this->fixed_point_value = src.getRawBits();
    return (*this);   
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_value);
}

void Fixed::setRawBits(int const raw){
    this->fixed_point_value = raw;
}
