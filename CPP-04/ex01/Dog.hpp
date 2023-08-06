/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:32:16 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 01:02:21 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal{
private:
    Brain *brain_;
public:
    Dog();
    Dog(Dog const &src);
    Dog & operator=(Dog const &rhs);
    ~Dog();
    void makeSound(void) const;
    
};

#endif