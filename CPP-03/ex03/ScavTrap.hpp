/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:24:43 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/30 23:42:51 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class  ScavTrap: public ClapTrap 
{ 
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(ScavTrap const & rhs);
        ~ScavTrap();
        
        ScavTrap & operator=(ScavTrap const & rhs);
        
        void guardGate();
};


#endif