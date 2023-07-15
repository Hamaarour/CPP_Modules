/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:25:17 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/15 17:40:41 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main (int ac, char **av)
{
    if (ac == 4)
    {
        Replace replace(av[1], av[2], av[3]);
        replace.replace();
    }
    else
        std::cout << "Error: bad arguments" << std::endl;
    
    return (0);
}