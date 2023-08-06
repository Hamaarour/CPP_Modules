/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:00:15 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 00:04:48 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain const &src);
        Brain & operator=(Brain const &rhs);
        ~Brain();
};

#endif