/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:33:48 by hamaarou          #+#    #+#             */
/*   Updated: 2023/07/14 22:33:49 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string str1, std::string str2)
{
    this->filename = filename;
    this->str1 = str1;
    this->str2 = str2;
    this->newfilename = filename + ".replace";
}

Replace::~Replace()
{
}

void Replace::replace()
{
    std::ifstream file(this->filename);
    std::ofstream newfile(this->newfilename);
    std::string line;
    std::string newline;

    if (file.is_open() && newfile.is_open())
    {
        while (getline(file, line))
        {
            size_t pos = 0;
            newline.clear();
            while ((pos = line.find(this->str1, pos)) != std::string::npos)
            {
                newline += line.substr(0, pos) + this->str2;
                pos += this->str1.length();
                line = line.substr(pos);
                pos = 0;
            }
            newline += line;
            newfile << newline << std::endl;
        }
        file.close();
        newfile.close();
    }
    else
        std::cout << "Error: can't open file" << std::endl;
}
