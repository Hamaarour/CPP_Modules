/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:36 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/28 15:41:29 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
	private:
		std::string		_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		void			execute(Bureaucrat const & executor) const;
};

# endif
