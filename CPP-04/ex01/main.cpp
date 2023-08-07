/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:59:39 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/07 12:39:43 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* d = new Dog();
    // const Animal* c = new Cat();

    // delete d;
    // delete c;

    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }

    // const Animal* animals[6] = { new Dog(), new Dog(), new Cat(), new Cat(), new Dog(), new Cat() };
    // for ( int i = 0; i < 6; i++ ) {
    //     delete animals[i];
    // }
    // return 0;

    Cat c;
    Cat c2(c);

    system("leaks Animal");
}