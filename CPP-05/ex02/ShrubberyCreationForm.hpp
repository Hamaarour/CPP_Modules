/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:03:39 by hamaarou          #+#    #+#             */
/*   Updated: 2023/11/27 22:36:45 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string const	_target;
public:
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void		execute(Bureaucrat const & executor) const;



};

#endif
