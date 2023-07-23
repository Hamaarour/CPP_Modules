/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:35:56 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/22 22:36:38 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap 
{ 
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(FragTrap const & rhs);
        ~FragTrap();
        
        FragTrap & operator=(FragTrap const & rhs);
        
        void highFivesGuys(void);
};



#endif