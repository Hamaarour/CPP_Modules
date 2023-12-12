/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:43:23 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/12 18:45:34 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	AForm *makePresidentialPardonForm(std::string target);
	AForm *makeRobotomyRequestForm(std::string target);
	AForm *makeShrubberyCreationForm(std::string target);

public:
	Intern();
	Intern(Intern const &src);
	~Intern();
	Intern &operator=(Intern const &rhs);
	AForm *makeForm(std::string name, std::string target);
	class FormNotFoundException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif
