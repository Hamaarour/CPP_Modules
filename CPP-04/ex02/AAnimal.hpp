/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:22:21 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/06 02:04:35 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{
protected:
    std::string type_;
public:
    //------------------ Constructors ------------------//
    AAnimal();
    AAnimal(AAnimal const & rhs);
    //------------------ Overloader ------------------//
    AAnimal & operator=(AAnimal const & rhs);
    //------------------ Destructor ------------------//
    virtual ~AAnimal();
    //------------------ Getter && Setter ------------------//
    std::string getType() const;
    void setType(std::string type);
    //------------------ Member function ------------------//
    virtual void makeSound() const;
};
#endif