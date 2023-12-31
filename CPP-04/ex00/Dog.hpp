/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:32:16 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/05 02:25:13 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
public:
    Dog();
    Dog(Dog const &src);
    Dog & operator=(Dog const &rhs);
    ~Dog();
    void makeSound(void) const;
    
};

#endif