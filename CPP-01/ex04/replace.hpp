/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:33:41 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/14 22:33:42 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> // std::ifstream, std::ofstream 


class Replace
{
    private:
        std::string str1;
        std::string str2;
        std::string filename;
        std::string newfilename;

    public:
        Replace(std::string filename, std::string str1, std::string str2);
        ~Replace();
        void replace();
};