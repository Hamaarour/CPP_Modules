/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:03:31 by hamaarou          #+#    #+#             */
/*   Updated: 2023/06/30 13:03:31 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    std::cout << "Phonebook Constructor called" << std::endl;
    this->index = 0;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook Destructor called" << std::endl;
}

