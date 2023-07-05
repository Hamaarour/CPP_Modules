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

Contact::Contact(void){}

Contact::~Contact(void){}

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

/*
The condition if (std::string::npos == first) is used to handle a special case
in the trim function implementation.

In the trim function, the find_first_not_of function is used
 to find the position of the first non-whitespace character in the string.
  It returns std::string::npos if no such character is found.

If find_first_not_of returns std::string::npos, it means that the
entire string consists of whitespace characters. In such a case,
there is no need to perform any trimming, and the original string
can be returned as it is.

The if (std::string::npos == first) return (str); statement allows
 the function to exit early and return the original string without
 any modifications. It saves unnecessary operations of finding the
 last non-whitespace character and erasing the substrings.

By checking this condition at the beginning, we can optimize the trim
function for the case where the input string is already trimmed or
contains only whitespace characters.
*/
std::string my_trim(const std::string &str)
{
    // find_first_not_of returns the index of the first character that does not match any of the characters specified in its arguments
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
            if (!std::isalpha(first_name[i]) || !std::isspace(first_name[i]))
            {
                std::cout << "first name is not valid" << std::endl;
                return 1;
            }
        }
        if (first_name.length() > 10)
        {
            first_name[9] = '.';
            first_name.erase(10, first_name.length() - 10);
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
        std::cout << "first name is empty" << std::endl;
        return 1;
    }
    else
    {
        for (size_t i = 0; i < last_name.length(); i++)
        {
            if (!isalpha(last_name[i]) || !isspace(last_name[i]))
            {
                std::cout << "last name is not valid" << std::endl;
                return 1;
            }
        }
        if (last_name.length() > 10)
        {
            last_name[9] = '.';
            last_name.erase(10, last_name.length() - 10);
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
            if (!isalpha(nickname[i]) || !isspace(nickname[i]))
            {
                std::cout << "nickname is not valid" << std::endl;
                return 1;
            }
        }
        if (nickname.length() > 10)
        {
            nickname[9] = '.';
            nickname.erase(10, nickname.length() - 10);
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
        if (phone_number.length() > 10)
        {
            phone_number[9] = '.';
            phone_number.erase(10, phone_number.length() - 10);
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
    if (darkest_secret.length() > 10)
    {
        darkest_secret[9] = '.';
        darkest_secret.erase(10, darkest_secret.length() - 10);
    }
    this->_darkest_secret = darkest_secret;
    return 0;
}
