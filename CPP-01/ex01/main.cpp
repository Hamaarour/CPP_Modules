/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:26:44 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/14 21:59:17 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(-5, "hamaarou");
    for (int i = 0; i < 10; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie;
    return (0);
}