/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:01:04 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/12 18:35:58 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), _target("default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
	Form(src), _target(src._target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned() || (executor.getGrade() > getGradeToExecute()))
		throw (GradeTooLowException());
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
