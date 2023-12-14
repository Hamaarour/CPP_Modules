/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:46:56 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/14 16:23:46 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// default constructor
Intern::Intern(void) {}

// parameter constructor
Intern::Intern(Intern const &src)
{
	*this = src;
}
// destructor
Intern::~Intern() {}

// assignment operator
Intern &Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	size_t i = 0;
	std::string form[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (i = 0; i < 3; i++)
	{
		if (form[i] == formName)
			break;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << formName << std::endl;
		return (new RobotomyRequestForm(target));
	case 1:
		std::cout << "Intern creates " << formName << std::endl;
		return (new PresidentialPardonForm(target));
	case 2:
		std::cout << "Intern creates " << formName << std::endl;
		return (new ShrubberyCreationForm(target));
	default:
		std::cout << "Intern can't create " << formName << " because it's not a valid form" << std::endl;
		return (NULL);
	}
}
