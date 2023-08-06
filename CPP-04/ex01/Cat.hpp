/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:32:14 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 01:02:26 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal{
private:
    Brain *brain_;
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