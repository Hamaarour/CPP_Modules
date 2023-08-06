/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:51:21 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/05 18:55:47 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
    WrongCat();
    WrongCat(WrongCat const &src);
    WrongCat & operator=(WrongCat const &rhs);
    ~WrongCat();

    void setType(std::string type);
    std::string getType() const;
    void makeSound(void) const; 
};
#endif