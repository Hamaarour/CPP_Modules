#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form{
private:
	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;
	Form();
public:
	//------------------------- Constructor -------------------------
	Form(const std::string& name, const int gradeToSign, const int gradeToExecute);
	Form(const Form& copy);
	Form& operator=(const Form& op);
	~Form();

	//------------------------- Getters -------------------------
	const std::string& getName();
	bool getSigned();
	int getGradeToSign();
	int getGradeToExecute();
	//------------------------- member function -------------------------
	void beSigned(const Bureaucrat& bureaucrat);
	//------------------------- Exception -------------------------
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw() {
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw() {
			return ("Grade too low");
		}
	};
};
//------------------------- OVERLOAD -------------------------
std::ostream& operator<<(std::ostream& os, const Form& form);