/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:21:11 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/07 15:21:11 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie_he = newZombie("hamaarou");
    // zombie->setName("hamaarou");
    // zombie->announce();
    delete zombie_he;
    // randomChump("hamaarou");

    return (0);
}