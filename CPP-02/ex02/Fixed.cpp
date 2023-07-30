/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:17:15 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/29 21:34:05 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : fixed_point_value(0)
{
}

Fixed::Fixed (const int value)
{
    this->fixed_point_value = value << this->fractional_bits;
}

Fixed::Fixed (const float value)
{
    this->fixed_point_value = roundf(value * (1 << this->fractional_bits));
}

Fixed::Fixed (const Fixed &src)
{
    *this = src;
}

Fixed::~Fixed ()
{
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
    return (this->fixed_point_value);
}   

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}

// Overload operator
Fixed &Fixed::operator=(Fixed const &src)
{
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
    Fixed   tmp;

    int  r = this->fixed_point_value * src.fixed_point_value;
    tmp.setRawBits(r / (1 << this->fractional_bits));
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &src) const
{
    Fixed   tmp;

    int  r = this->fixed_point_value / src.fixed_point_value;
    tmp.setRawBits(r * (1 << this->fractional_bits));
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &src) const
{
    Fixed   tmp;
    int     r;

    r = this->fixed_point_value + src.fixed_point_value;
    tmp.setRawBits(r);
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &src) const
{
    Fixed   tmp;
    int     r;

    r = this->fixed_point_value - src.fixed_point_value;
    tmp.setRawBits(r);
    return (tmp);
}

// unary operator overloading
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

// static member function 

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &src)
{
    out << src.toFloat();
    return (out);
}
