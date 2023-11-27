/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:54:24 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/27 17:09:18 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{}

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
}

AForm::~AForm(void)
{}

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_signed = rhs.getSigned();
		this->_gradeToSign = rhs.getGradeToSign();
		this->_gradeToExecute = rhs.getGradeToExecute();
	}
	return (*this);
}

std::string const	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int		AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int		AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}


std::ostream & operator<<(std::ostream & o, AForm const & rhs)
{
	o << rhs.getName() << " form, grade required to sign it " << rhs.getGradeToSign() << ", grade required to execute it " << rhs.getGradeToExecute() << ", signed: " << rhs.getSigned();
	return (o);
}
