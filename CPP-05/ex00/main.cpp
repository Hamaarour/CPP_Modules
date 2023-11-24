/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:07:03 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/24 21:36:45 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try{
		Bureaucrat b("hamaarou", 1);
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
	}
	catch (b::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
	Bureaucrat b("ash", 1);

	std::cout << b << std::endl;

	b.incrementGrade();
	// b.decrementGrade();
    } catch (b::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
