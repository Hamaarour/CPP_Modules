/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:19:53 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/01 02:09:51 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");
    ClapTrap c("c");

    b.takeDamage(5);
    a.attack("b");
    b.attack("a");
    a.takeDamage(5);
    
    a.beRepaired(10);
    b.beRepaired(10);
    return (0);
}