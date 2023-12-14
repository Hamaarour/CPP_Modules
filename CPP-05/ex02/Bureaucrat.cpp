/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:19:35 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/14 16:22:38 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
// ------------------ Constructors ------------------ //
Bureaucrat::Bureaucrat()
{
	std::cout << "{Bureaucrat} Default Constructor called" << std::endl;
};

//------------------ parameterized Constructors ------------------//
Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	std::cout << "{Bureaucrat} Parameterized Constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
};
// ------------------ copy Constructor ------------------ //
Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs._name)
{
	std::cout << "{Bureaucrat} Copy Constructor called" << std::endl;
	*this = rhs;
};
// ------------------ Overload ------------------ //
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "{Bureaucrat} Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
};
// ------------------ Destructor ------------------ //
Bureaucrat::~Bureaucrat() { std::cout << "{Bureaucrat} Destructor called" << std::endl; };

// ------------------ Getter ------------------ //
std::string Bureaucrat::getName() const { return (this->_name); };
int Bureaucrat::getGrade() const { return (this->_grade); };

/*\
void	Bureaucrat::signForm(AForm &a)
{
if (a.beSigned(*this))
	std::cout << _name << " signed " << a.getname() << std::endl;
}

void	Bureaucrat::executeForm(AForm const &a)
{
if (a.execute(*this))
	std::cout << _name << " executed " << a.getname() << std::endl;
}
*/
void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		if (form.getSigned())
			std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
};

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{

		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << _name << " couldn't execute " << form.getName() << " because " << e.what() << "." << std::endl;
	}
};

// ------------------ Member function ------------------ //
void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
};

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
};
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
};

//-------------------- operator << ---------------------//
std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
};
