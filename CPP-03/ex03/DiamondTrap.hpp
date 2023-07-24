/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:01:24 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/23 20:55:31 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    private:
        std::string Name;

    public:
        DiamondTrap();
        DiamondTrap(std::string Name);
        DiamondTrap(DiamondTrap const & rhs);

        DiamandTrap & operator=(DiamandTrap const & rhs);
        ~DiamondTrap();

        void whoAmI(void);
        
};
#endif