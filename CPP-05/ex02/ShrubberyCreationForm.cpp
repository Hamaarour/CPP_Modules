/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:04:37 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/27 20:37:53 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//--------- default constructor ---------//
ShrubberyCreationForm::ShrubberyCreationForm(void)
{}
//---------- parametric constructor ---------//
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("Shrubbery_Form", 145, 137), _target(target)
{}
// ------------ copy constructor ------------//
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) , _target(src.getTarget)
{
	*this = src;
}
// -------------- destructor ----------------//
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) cnost {
	/*
		add the execute(Bureaucrat const & executor) const member function to
		the base form and implement a function to execute the form’s action of the concrete
		classes. You have to check that the form is signed and that the grade of the bureaucrat
		attempting to execute the form is high enough. Otherwise, throw an appropriate excep-
		tion.
	*/
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream ofs(this->_target + "_shrubbery");
		ofs << "       _-_" << std::endl;
		ofs << "    /~~   ~~\\" << std::endl;
		ofs << " /~~         ~~\\" << std::endl;
		ofs << "{               }" << std::endl;
		ofs << " \\  _-     -_  /" << std::endl;
		ofs << "   ~  \\\\ //  ~" << std::endl;
		ofs << "_- -   | | _- _" << std::endl;
		ofs << "  _ -  | |   -_" << std::endl;
		ofs << "      // \\\\" << std::endl;
		ofs << "    /~~   ~~\\" << std::endl;
		ofs << " /~~         ~~\\" << std::endl;
		ofs << "{               }" << std::endl;
		ofs << " \\  _-     -_  /" << std::endl;
		ofs << "   ~  \\\\ //  ~" << std::endl;
		ofs << "_- -   | | _- _" << std::endl;
		ofs << "  _ -  | |   -_" << std::endl;
		ofs << "      // \\\\" << std::endl;
		ofs << "    /~~   ~~\\" << std::endl;
		ofs << " /~~         ~~\\" << std::endl;
		ofs << "{               }" << std::endl;
		ofs << " \\  _-     -_  /" << std::endl;
		ofs << "   ~  \\\\ //  ~" << std::endl;
		ofs << "_- -   | | _- _" << std::endl;
		ofs << "  _ -  | |   -_" << std::endl;
		ofs << "      // \\\\" << std::endl;
		ofs << "    /~~   ~~\\" << std::endl;
		ofs << " /~~         ~~\\" << std::endl;
		ofs << "{****************}" << std::endl;
	}
}

std::string const	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
{
	o << rhs.getName() << " form, grade required to sign it " <<
		rhs.getGradeToSign() << ", grade required to execute it " <<
		rhs.getGradeToExecute() << ", signed: " <<
		rhs.getSigned() << ", target: " << rhs.getTarget();
	return (o);
}
