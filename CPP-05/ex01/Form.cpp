# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) :
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	_signed = false;
}

Form::Form(const Form& copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {};

Form& Form::operator=(const Form& op) {
	if (this == &op)
		return (*this);
	_signed = op._signed;
	return (*this);
}

Form::~Form() {};

std::string& Form::getName() const {
	return (_name);
}

bool Form::getSigned() const {
	return (_signed);
}

int Form::getGradeToSign() const {
	return (_gradeToSign);
}

int Form::getGradeToExecute() const {
	return (_gradeToExecute);
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form name: " << form.getName() << std::endl;
	os << "Signed: " << form.getSigned() << std::endl;
	os << "Grade to sign: " << form.getGradeToSign() << std::endl;
	os << "Grade to execute: " << form.getGradeToExecute() << std::endl;
	return (os);
}


