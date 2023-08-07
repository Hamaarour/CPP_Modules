/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:59:39 by hamaarou          #+#    #+#             */
/*   Updated: 2023/08/07 00:18:51 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "------------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "*************************" << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << "*************************" << std::endl;
    i->makeSound();
    j->makeSound();
    std::cout << "*************************" << std::endl;
    meta->makeSound();
    std::cout << "*************************" << std::endl;
    
    delete meta;
    delete j;
    delete i;
    std::cout << "------------------" << std::endl;
    // const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* j = new WrongCat();

    // std::cout << j->getType() << " " << std::endl;
    // j->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete j;
    // std::cout << "------------------" << std::endl;

    return 0;
}