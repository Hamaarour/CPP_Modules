/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:20:39 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/22 22:21:05 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    protected:
        std::string		Name;
        unsigned int	Hitpoints;
        unsigned int	Energy_points;
        unsigned int	Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap const & rhs);
        ~ClapTrap();
        
        ClapTrap & operator=(ClapTrap const & rhs);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
};
#endif