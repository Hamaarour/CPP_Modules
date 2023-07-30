/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 07:58:27 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/29 10:44:10 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>

class Fixed
{
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;
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
};
std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
