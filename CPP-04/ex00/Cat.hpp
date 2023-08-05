/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:32:14 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/04 15:56:24 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{
public:
    //------------------ Constructors ------------------//
    Cat();
    //------------------- Copy constructor -------------------//
    Cat(const Cat &src);
    //------------------- Assignation operator -------------------//
    Cat & operator=(Cat const &rhs);
    //------------------- Destructor -------------------//
    ~Cat();
    //------------------ Member function ------------------//
    void makeSound(void) const;
};

#endif