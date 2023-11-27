/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:54:38 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/27 17:09:47 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"


class AForm
{
private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeToSign;
	int const			_gradeToExecute;
	AForm(void);
public:
	AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
	AForm(AForm const & src);
	virtual ~AForm(void);
	AForm & operator=(AForm const & rhs);

	std::string const	getName(void) const;
	bool				getSigned(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;
	void				beSigned(Bureaucrat const & src);
	virtual void		execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw {
				return ("Grade too high");
			};
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw {
				return ("Grade too low");
			};
	};
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw {
				return ("Form not signed");
			};
	};
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif
