/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:32:16 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 02:05:25 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
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