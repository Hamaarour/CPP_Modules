/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:07:03 by hamaarou          #+#    #+#             */
/*   Updated: 2023/12/15 16:21:01 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    Form form("MyForm", 2, 2);
    std::cout << form << std::endl;

    Bureaucrat Burea("Burea", 2);
    Burea.decrementGrade();
    std::cout << Burea << std::endl;
    Burea.signForm(form);
    std::cout << form << std::endl;

    return 0;
}
