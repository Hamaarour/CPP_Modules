/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:18:28 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/22 22:11:04 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap s1("scav 1");
    ScavTrap s2(s1);
    
    s1.attack("target");
    s1.takeDamage(10);
    s1.beRepaired(10);
    s1.guardGate();

    return (0);
}