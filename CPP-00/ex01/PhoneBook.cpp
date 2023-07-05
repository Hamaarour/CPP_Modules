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
    this->_index = 0;
}

Phonebook::~Phonebook() {}

void Phonebook::add()
{
    std::string input = "";
    int i = 0;

    while (input.empty() || i == 1)
    {
        i = 0;
        std::cout << "Enter your first name: ";
        std::getline(std::cin, input);
        if (input.empty() == 1)
            std::cout << "first name can't be empty" << std::endl;
        if (this->_contact[this->_index % 8].set_first_name(input) == 1)
            continue;
        else
            i = 1;
    }
    while (input.empty() || i == 1)
    {
        i = 0;
        std::cout << "Enter your last name: ";
        std::getline(std::cin, input);
        if (input.empty() == 1)
            std::cout << "last name can't be empty" << std::endl;
        if (this->_contact[this->_index % 8].set_last_name(input) == 1)
            continue;
        else
            i = 1;
    }
    while (input.empty() || i == 1)
    {
        i = 0;
        std::cout << "Enter your nickname: ";
        std::getline(std::cin, input);
        if (input.empty() == 1)
            std::cout << "nickname can't be empty" << std::endl;
        if (this->_contact[this->_index % 8].set_nickname(input) == 1)
            continue;
        else
            i = 1;
    }
    while (input.empty() || i == 1)
    {
        i = 0;
        std::cout << "Enter your phone number: ";
        std::getline(std::cin, input);
        if (input.empty() == 1)
            std::cout << "phone number can't be empty" << std::endl;
        if (this->_contact[this->_index % 8].set_phone_number(input) == 1)
            continue;
        else
            i = 1;
    }
    while (input.empty() || i == 1)
    {
        i = 0;
        std::cout << "Enter your darkest secret: ";
        std::getline(std::cin, input);
        if (input.empty() == 1)
            std::cout << "darkest secret can't be empty" << std::endl;
        if (this->_contact[this->_index % 8].set_darkest_secret(input) == 1)
            continue;
        else
            i = 1;
    }
    this->_index++;
    input.clear();
    std::cout << "Contact added successfully" << std::endl;
}

void Phonebook::print() const
{
    std::cout << "|-----------------------------------------------|" << std::endl;
    std::cout << "|                   Phonebook                   |" << std::endl;
    std::cout << "|-----------------------------------------------|" << std::endl;
    std::cout << "|  index   | first name | last name | nickname  |" << std::endl;
    std::cout << "|----------|------------|-----------|-----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << "|    " << i + 1 << "    |";
        std::cout << this->_contact[i].get_first_name() << " |";
        std::cout << this->_contact[i].get_last_name() << " |";
        std::cout << this->_contact[i].get_nickname() << " |";
        std::cout << std::endl;
    }
}

void Phonebook::search()
{
    int in = 0;
    std::string input;
    this->print();
    std::cout << "Enter the index of the contact you want to see: " << std::endl;
    std::getline(std::cin, input);
    if (input.empty() == 0)
    {
        in = std::stoi(input);
        if (in > 0 && in <= this->_index)
        {
            std::cout << "first name: " << this->_contact[in - 1].get_first_name() << std::endl;
            std::cout << "last name: " << this->_contact[in - 1].get_last_name() << std::endl;
            std::cout << "nickname: " << this->_contact[in - 1].get_nickname() << std::endl;
            std::cout << "phone number: " << this->_contact[in - 1].get_phone_number() << std::endl;
            std::cout << "darkest secret: " << this->_contact[in - 1].get_darkest_secret() << std::endl;
            return;
        }
        std::cout << "index not found" << std::endl;
        return;
    }
    std::cout << "index can't be empty" << std::endl;
    return;
}

void Phonebook::menu() const
{
    std::cout << "|-----------------------------------------------|" << std::endl;
    std::cout << "|                   Phonebook                   |" << std::endl;
    std::cout << "|-----------------------------------------------|" << std::endl;
    std::cout << "|                   1 - SEARCH                  |" << std::endl;
    std::cout << "|                   2 - ADD                     |" << std::endl;
    std::cout << "|                   3 3 EXIT                    |" << std::endl;
    std::cout << "|-----------------------------------------------|" << std::endl;
}