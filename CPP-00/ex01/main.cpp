/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 00:50:58 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/05 00:50:58 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::string command;
    PhoneBook.menu();
    while (true)
    {
        std::cout << "Enter a command : ";
        if (!std::getline(std::cin, command))
            break;
        if (command.empty()) {
            std::cout << "Invalid command" << std::endl;
            continue;
        }
        if (command == "EXIT") 
            break;
        else if (command == "ADD")
            PhoneBook.add();
        else if (command == "SEARCH")
            PhoneBook.search();
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}