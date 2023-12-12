/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:07:03 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/12 18:39:59 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bureaucrat("Bureaucrat", 3);

		PresidentialPardonForm Presidential("Presidential");
		std::cout << Presidential << std::endl;
		Bureaucrat.signForm(Presidential);
		std::cout << Presidential << std::endl;
		Bureaucrat.executeForm(Presidential);
		std::cout << "************************" << std::endl;
		RobotomyRequestForm Robotomy("Robotomy");
		std::cout << Robotomy << std::endl;
		Bureaucrat.signForm(Robotomy);
		std::cout << Robotomy << std::endl;
		Bureaucrat.executeForm(Robotomy);
		std::cout << "************************" << std::endl;
		ShrubberyCreationForm Shrubbery("Shrubbery");
		std::cout << Shrubbery << std::endl;
		Bureaucrat.signForm(Shrubbery);
		std::cout << Shrubbery << std::endl;
		Bureaucrat.executeForm(Shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
