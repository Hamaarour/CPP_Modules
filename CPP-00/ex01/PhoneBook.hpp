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

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
class PhoneBook
{
private:
    Contact _contact[8];
    int _index;

public:
    PhoneBook();
    ~PhoneBook();
    void add(void);
    void search(void);
    void print() const;
    void menu() const;
};

#endif