/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:03:25 by hamaarou          #+#    #+#             */
/*   Updated: 2023/06/30 13:03:25 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
class Phonebook
{
    private:
        Contact contacts[8];
        int     index;
    public:
        Phonebook();
        ~Phonebook();
        void    add(void);
        void    search(void);
        void    print(void) const;


        

};

#endif