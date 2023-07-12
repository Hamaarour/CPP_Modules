/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:03:31 by hamaarou          #+#    #+#             */
/*   Updated: 2023/06/30 13:03:31 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add()
{
    std::string input;
    int i = 0;
    int flag = 0;

    while (std::cin.good() && (input.empty() || i == 1))
    {
        i = 0;
        std::cout << "Enter your first name: ";
        std::getline(std::cin, input);
        if (this->_contact[this->_index % 8].set_first_name(input) == 1)
        {    
            i = 1;
            flag--;    
        }
        flag++;
    }
    input.clear();
    while (std::cin.good() && (input.empty() || i == 1))
    {
        i = 0;
        std::cout << "Enter your last name: ";
        std::getline(std::cin, input);
        if (this->_contact[this->_index % 8].set_last_name(input) == 1)
        {    
            i = 1;
            flag--;    
        }
        flag++;
    }
    input.clear(); 
    while (std::cin.good() && (input.empty() || i == 1))
    {
        i = 0;
        std::cout << "Enter your nickname: ";
        std::getline(std::cin, input);
        if (this->_contact[this->_index % 8].set_nickname(input) == 1)
        {    
            i = 1;
            flag--;    
        }
        flag++;
    }
    input.clear();
    while (std::cin.good() && (input.empty() || i == 1))
    {
        i = 0;
        std::cout << "Enter your phone number: ";
        std::getline(std::cin, input);
        if (this->_contact[this->_index % 8].set_phone_number(input) == 1)
        {    
            i = 1;
            flag--;    
        }
        flag++;
    }
    input.clear();
    while (std::cin.good() && (input.empty() || i == 1))
    {
        i = 0;
        std::cout << "Enter your darkest secret: ";
        std::getline(std::cin, input);
        if (this->_contact[this->_index % 8].set_darkest_secret(input) == 1)
        {    
            i = 1;
            flag--;    
        }
        flag++;
    }
    this->_index++;
    input.clear();
    if (flag == 5)
        std::cout << "\033[0;32mContact added successfully\033[0m" << std::endl;
    else
        std::cout << "\033[0;31mContact not added\033[0m" << std::endl;

}

void PhoneBook::print() const
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|                   PhoneBook               |" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|  index   |first name|last name | nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << '|' << std::setw(10) << i + 1 ;
        std::cout << '|' << std::setw(10) << this->_contact[i].get_first_name() ;
        std::cout << '|' << std::setw(10) << this->_contact[i].get_last_name() ;
        std::cout << '|' << std::setw(10) << this->_contact[i].get_nickname()  ;
        std::cout << '|' << std::endl;
    }
}

void PhoneBook::search()
{
    int in = 0;
    std::string input;
    this->print();
    std::cout << "Enter the index of the contact you want to see: " << std::endl;
    std::getline(std::cin, input);
    if (input.empty() == 0)
    {
        if (input[0] <= '0' || input[0] >= '9')
        {
            std::cout << "Invalid !!" << std::endl;
            return;
        }
        in = std::stoi(input);
        if(std::cin.fail() || (in < 0 || in > 8))
        {
            std::cout << "Index not found" << std::endl;
            return;
        }
        if (in > 0 && in <= this->_index)
        {
            std::cout << "First name: " << this->_contact[in - 1].get_first_name() << std::endl;
            std::cout << "Last name: " << this->_contact[in - 1].get_last_name() << std::endl;
            std::cout << "Nickname: " << this->_contact[in - 1].get_nickname() << std::endl;
            std::cout << "Phone number: " << this->_contact[in - 1].get_phone_number() << std::endl;
            std::cout << "Darkest secret: " << this->_contact[in - 1].get_darkest_secret() << std::endl;
            return;
        }
        std::cout << "Index not found" << std::endl;
        return;
    }
    std::cout << "Index can't be empty" << std::endl;
    return;
}

void PhoneBook::menu() const
{
    std::cout << "|-----------------------------------------------|" << std::endl;
    std::cout << "|                   PhoneBook                   |" << std::endl;
    std::cout << "|-----------------------------------------------|" << std::endl;
    std::cout << "|                    - SEARCH                   |" << std::endl;
    std::cout << "|                    - ADD                      |" << std::endl;
    std::cout << "|                    - EXIT                     |" << std::endl;
    std::cout << "|-----------------------------------------------|" << std::endl;
}