/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:11:35 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/21 12:17:20 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>

class Fixed{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;
        /*
        We can define class members static using static keyword. When we declare
        a member of a class as static it means no matter how many objects of the class are created, 
        there is only one copy of the static member.
        A static member is shared by all objects of the class. All static data is initialized to zero
        when the first object is created, if no other initialization is present. We can't put it in the 
        class definition but it can be initialized outside the by redeclaring the static variable, 
        using the scope resolution operator :: to identify which class it belongs to.
    */
    public:
        Fixed ();
        Fixed (const int value);
        Fixed (const float value);
        Fixed (const Fixed &src);
        Fixed &operator=(Fixed const &src);
        ~Fixed ();

        float toFloat( void ) const;
        int toInt( void ) const;

        int getRawBits(void) const;
        void setRawBits(int const raw); 
        
        // Overload operator
        bool operator>=(const Fixed &src) const;
        bool operator<=(const Fixed &src) const;
        bool operator>(const Fixed &src) const; 
        bool operator==(const Fixed &src) const;
        bool operator!=(const Fixed &src) const;
        bool operator<(const Fixed &src) const;
        
        Fixed operator*(const Fixed &src) const;
        Fixed operator/(const Fixed &src) const;
        Fixed operator+(const Fixed &src) const;
        Fixed operator-(const Fixed &src) const;
        
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);          
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);


#endif