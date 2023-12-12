/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:03:58 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/28 16:59:28 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    // ------------------ Constructors ------------------ //
    Bureaucrat();
    Bureaucrat(std::string const & name, int grade);
    Bureaucrat(Bureaucrat const & rhs);
    // ------------------ Overload ------------------ //
    Bureaucrat & operator=(Bureaucrat const & rhs);
    // ------------------ Destructor ------------------ //
    ~Bureaucrat();
    // ------------------ Getter ------------------ //
    std::string getName() const;
    int getGrade() const;
    // ------------------ Member function ------------------ //
    void incrementGrade();
    void decrementGrade();
    // ------------------ Exceptions classes------------------ //
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
// ------------------ operator << ------------------ //
std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);
#endif
