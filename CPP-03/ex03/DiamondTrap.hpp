/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 23:01:24 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/25 16:40:53 by hamaarou         ###   ########.fr       */
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
        std::string _Name;

    public:
        DiamondTrap();
        DiamondTrap(std::string Name);
        DiamondTrap(DiamondTrap const & rhs);

        DiamondTrap & operator=(DiamondTrap const & rhs);
        ~DiamondTrap();

        void whoAmI(void);
        
};
#endif