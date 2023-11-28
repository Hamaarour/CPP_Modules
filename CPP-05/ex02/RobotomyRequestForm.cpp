/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:41:46 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/28 16:48:32 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//+---------constructors---------//
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName() , src.getGradeToSign(), src.getGradeToExecute())
{
	_target = src._target;
}
//+-------------------------------------------//


//+---------operators---------//
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
	{
		_target = rhs._target;
	}
	return (*this);
}

//+---------------------------//

//+---------destructors---------//
RobotomyRequestForm::~RobotomyRequestForm(){}
//+-----------------------------//

//+---------functions---------//
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	/*
	Required grades: sign 72, exec 45
	Makes some drilling noises. Then, informs that <target>
	has been robotomized
	successfully 50% of the time. Otherwise, informs that
	the robotomy failed.
	*/
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	/*
		This is a mechanism to ensure that only bureaucrats with
		a sufficient grade can execute the robotomy request.
	*/
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		static int i = 0;
		std::srand(std:time(0));
		i = std::rand() % 2;
		if(i == 0)
			std::cout << "the" << _target << "has been robotomized successfully" << std::endl;
		else
			std::cout << "the" << _target << "robotomy failed" << std::endl;
	}
}
