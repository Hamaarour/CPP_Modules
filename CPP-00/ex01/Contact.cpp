/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:03:28 by hamaarou          #+#    #+#             */
/*   Updated: 2023/06/30 13:03:28 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name(void) const
{
    return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
    return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
    return (this->_nickname);
}

std::string Contact::get_phone_number(void) const
{
    return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
    return (this->_darkest_secret);
}

std::string my_trim(const std::string &str)
{
    size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
        return (str);
    size_t last = str.find_last_not_of(' ');
    return (str.substr(first, last - first + 1));
}

int Contact::set_first_name(std::string first_name)
{
    first_name = my_trim(first_name);
    if (first_name.empty())
    {
        std::cout << "first name is empty" << std::endl;
        return 1;
    }
    else
    {
        for (size_t i = 0; i < first_name.length(); i++)
        {
            if (!std::isalpha(first_name[i]) && !std::isspace(first_name[i]))
            {
                std::cout << "First name is not valid" << std::endl;
                return 1;
            }
        }
        this->_first_name = first_name;
    }
    return 0;
}

int Contact::set_last_name(std::string last_name)
{
    last_name = my_trim(last_name);
    if (last_name.empty())
    {
        std::cout << "lastname is empty" << std::endl;
        return 1;
    }
    else
    {
        for (size_t i = 0; i < last_name.length(); i++)
        {
            if (!isalpha(last_name[i]) && !isspace(last_name[i]))
            {
                std::cout << "last name is not valid" << std::endl;
                return 1;
            }
        }
        this->_last_name = last_name;
    }
    return 0;
}

int Contact::set_nickname(std::string nickname)
{
    nickname = my_trim(nickname);
    if (nickname.empty())
    {
        std::cout << "nickname is empty" << std::endl;
        return 1;
    }
    else
    {
        for (size_t i = 0; i < nickname.length(); i++)
        {
            if (!isalpha(nickname[i]) && !isspace(nickname[i]))
            {
                std::cout << "nickname is not valid" << std::endl;
                return 1;
            }
        }
    }
    this->_nickname = nickname;
    return 0;
}

int Contact::set_phone_number(std::string phone_number)
{
    phone_number = my_trim(phone_number);
    if (phone_number.empty())
    {
        std::cout << "phone number is empty" << std::endl;
        return 1;
    }
    else
    {
        for (size_t i = 0; i < phone_number.length(); i++)
        {
            if (!isdigit(phone_number[i]))
            {
                std::cout << "phone number is not valid" << std::endl;
                return 1;
            }
        }
    }
    this->_phone_number = phone_number;
    return 0;
}

int Contact::set_darkest_secret(std::string darkest_secret)
{
    darkest_secret = my_trim(darkest_secret);
    if (darkest_secret.empty())
    {
        std::cout << "darkest secret is empty" << std::endl;
        return 1;
    }
    this->_darkest_secret = darkest_secret;
    return 0;
}

std::string Contact::get_info(std::string str) const
{
    std::string tmp;
    
    tmp = str;
    if (str.length() > 10)
    {
        tmp[9] = '.';
        tmp.erase(10, str.length() - 10);
    }
    return (tmp);
}