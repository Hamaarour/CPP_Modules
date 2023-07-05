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



#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string command;
    phonebook.menu();
    while (1)
    {
        std::cout << "Enter a command : ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}