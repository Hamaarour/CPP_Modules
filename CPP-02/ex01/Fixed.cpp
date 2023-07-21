/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:58:54 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/21 19:06:54 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor definitions
Fixed::Fixed() : fixed_point_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor definition
Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

// Overload constructor definitions
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = value << this->fractional_bits;
}

// Overload constructor definitions
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_value = roundf(value * (1 << this->fractional_bits));
}

// Destructor definition
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Assignment operator definition
Fixed &Fixed::operator=(Fixed const &src) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->fixed_point_value = src.getRawBits();
    return (*this);
}

// Getter and setter definitions
int Fixed::getRawBits() const {
    return this->fixed_point_value;
}

void Fixed::setRawBits(int const raw) {
    this->fixed_point_value = raw;
}

// Conversion functions
float Fixed::toFloat() const {
    return static_cast<float>(this->fixed_point_value) / (1 << this->fractional_bits);
}

int Fixed::toInt() const {
    return this->fixed_point_value >> this->fractional_bits;
}

// Output stream operator overload
std::ostream &operator<<(std::ostream &COUT, Fixed const &src) {
    COUT << src.toFloat();
    return o;
}
