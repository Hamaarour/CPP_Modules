/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:22:21 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 00:07:24 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
protected:
    std::string type_;
public:
    //------------------ Constructors ------------------//
    Animal();
    Animal(Animal const & rhs);
    //------------------ Overloader ------------------//
    Animal & operator=(Animal const & rhs);
    //------------------ Destructor ------------------//
    virtual ~Animal();
    //------------------ Getter && Setter ------------------//
    std::string getType() const;
    void setType(std::string type);
    //------------------ Member function ------------------//
    virtual void makeSound() const;
};
#endif