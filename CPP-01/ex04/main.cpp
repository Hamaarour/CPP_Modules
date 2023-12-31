/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:25:17 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/17 22:21:31 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main (int ac, char **av)
{
    if (ac == 4)
    {
        if (std::string(av[2]).empty() || std::string(av[3]).empty())
        {
            std::cout << "Error: bad arguments" << std::endl;
            return (0);
        }
        Replace replace(av[1], av[2], av[3]);
        replace.replace();
    }
    else
        std::cout << "Error: bad arguments" << std::endl;
    
    return (0);
}