/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIxed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:44:30 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/17 21:56:40 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int _fixed_point_value;
    static const int _fractional_bits = 8;

public:
    Fixed();
    Fixed(Fixed const &src);
    Fixed & operator=(Fixed const &src);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};