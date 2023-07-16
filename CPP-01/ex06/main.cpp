/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:54:24 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/16 17:14:34 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main (int ac, char **av)
{
     if (ac != 2) {
        std::cout << "Use one of this Arguments :" << std::endl;
        std::cout << "./harlFilter [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (EXIT_FAILURE);
    }
    Harl harl;
    harl.complain(av[1]);
    return (EXIT_SUCCESS);
}