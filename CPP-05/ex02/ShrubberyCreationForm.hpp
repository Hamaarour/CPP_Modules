/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:25:08 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/28 15:35:15 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string  _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string  target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif
