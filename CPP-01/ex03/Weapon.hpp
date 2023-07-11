/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:06:28 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/11 14:15:15 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostrem>
#include <string>

class Weapon
{
private:
    std::string _type;

public:
    Weapon();
    std::string getType(void) const;
    void setType(std::string type);
    ~Weapon();
};

#endif