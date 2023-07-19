/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:10:53 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/17 22:36:23 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    //stringRef is a reference to str semailaire to nickname or an alias
    std::string &stringREF = str;

    std::cout << &str << " : " << str << std::endl;
    std::cout << stringPTR << " : " << *stringPTR << std::endl;
    std::cout << &stringREF << " : " << stringREF << std::endl;

    
    return (0);
}
