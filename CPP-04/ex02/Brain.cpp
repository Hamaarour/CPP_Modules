/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 00:38:18 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/07 02:48:27 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = src;
}

Brain::Brain(std::string type)
{
    std::cout << "Brain Parametric Constructor called" << std::endl;
    for( int i = 0; i < 100; i++)
        this->_ideas[i] = type;
}

Brain & Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

