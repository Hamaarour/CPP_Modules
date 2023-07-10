/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:39:10 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/10 19:30:55 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
    std::string	_name;
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void        setName(std::string name);
    void		announce(void);
};
// Creates new Zombie stored on the heap, which announces itself
Zombie	*newZombie(std::string name);

Zombie *zombieHorde(int N, std::string name);

#endif