/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:17:15 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/21 15:56:57 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : fixed_point_value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const int value)
{
    //std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = value << this->fractional_bits;
}

Fixed::Fixed (const float value)
{
    //std::cout << "Float constructor called" << std::endl;
    this->fixed_point_value = roundf(value * (1 << this->fractional_bits));
}

Fixed::Fixed (const Fixed &src)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed ()
{
    //std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed_point_value / (1 << this->fractional_bits));
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point_value >> this->fractional_bits);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_value);
}   

void Fixed::setRawBits(int const raw)
{
    //std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_value = raw;
}

// Overload operator
Fixed &Fixed::operator=(Fixed const &src)
{
    //std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->fixed_point_value = src.getRawBits();
    return (*this);
}

bool Fixed::operator>=(const Fixed &src) const
{
    return (this->fixed_point_value >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) const
{
    return (this->fixed_point_value <= src.getRawBits());
}

bool Fixed::operator>(const Fixed &src) const
{
    return (this->fixed_point_value > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) const
{
    return (this->fixed_point_value < src.getRawBits());
}

bool Fixed::operator==(const Fixed &src) const
{
    return (this->fixed_point_value == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) const
{
    return (this->fixed_point_value != src.getRawBits());
}

Fixed Fixed::operator*(const Fixed &src) const
{
    return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed &src) const
{
    return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed Fixed::operator+(const Fixed &src) const
{
    return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed &src) const
{
    return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->fixed_point_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    this->fixed_point_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return ((a < b) ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return ((a < b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return ((a > b) ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return ((a > b) ? a : b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &src)
{
    out << src.toFloat();
    return (out);
}
