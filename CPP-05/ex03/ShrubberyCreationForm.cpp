/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:04:37 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/12 15:50:38 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//--------- default constructor ---------//
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery_Form", 145, 137), _target("und")
{}
//---------- parametric constructor ---------//
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery_Form", 145, 137), _target(target)
{}
// ------------ copy constructor ------------//
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName() , src.getGradeToSign(), src.getGradeToExecute())
{
	_target = src._target;
}
// -------------- destructor ----------------//
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
	{
		_target = rhs._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream ofs(this->_target + "_shrubbery");
       ofs << "                                *       *     *  \n"
			<< "           *                 /.-.\\         *\n"
			<< "                    *        `/&\\`                   *\n"
			<< "                            ,@.*;@,\n"
			<< "                           /_o.I %_\\    *\n"
			<< "              *           (`'--:o(_@;\n"
			<< "                         /`;--.,__ `')             *\n"
			<< "                        ;@`o % O,*`'`&\n"
			<< "                  *    (`'--)_@ ;o %'()\\      *\n"
			<< "                       /`;--._`''--._O'@;\n"
			<< "                      /&*,()~o`;-.,_ `""`)\n"
			<< "           *          /`,@ ;+& () o*`;-';\n"
			<< "                     (`""--.,_0 +% @' &()\\\n"
			<< "                     /-.,_    ``''--....-'`)  *\n"
			<< "                *    /@%;o`:;'--,.__   __.'\\\n"
			<< "                    ;*,&(); @ % &^;~`\"`o;@();         *\n"
			<< "                    /(); o^~; & ().o@*&`;&%O\\\n"
			<< "                    `\"=\"==\"\"==,,,.,=\"==\"===\"`\n"
			<< "                              #####\n"
			<< "                              #####"
			<< std::endl;
	}
}
