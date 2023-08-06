/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:50:17 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/05 18:50:19 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{
protected:
    std::string _type;
public:
    //------------------ Constructors ------------------//
    WrongAnimal();
    WrongAnimal(WrongAnimal const & rhs);
    //------------------ Overloader ------------------//
    WrongAnimal & operator=(WrongAnimal const & rhs);
    //------------------ Destructor ------------------//
    ~WrongAnimal();
    //------------------ Getter && Setter ------------------//
    std::string getType() const;
    void setType(std::string type);
    //------------------ Member function ------------------//
    void makeSound() const;
};
#endif