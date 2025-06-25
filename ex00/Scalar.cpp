/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:44:56 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/25 11:24:11 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::~ScalarConverter() {};

std::string What_type(std::string &literral)
{
	if (literral.length() == 1)
	{
		return "char";
	}
	else if (literral[0] == '-' || isdigit(literral[0]))
	{
		int i = 0;
		bool is_int = true;
		if (literral[0] == '-')
			i = 1;
		for (; literral[i]; i++)
		{
			if (!isdigit(literral[i]))
			{
				is_int = false;
				break;
			}
				
		}
		if (is_int)
			return "int";
	}
	else if (literral[literral.length() - 1] == 'f') 
	{
		return "float";
	}
	else
	{
		return "double";
	}
	return "laal";
}

void ScalarConverter::Convert(std::string litteral)
{
	if (!What_type(litteral).compare("char"))
	{
		char c = litteral[0];
		std::cout << "char: " << static_cast<char>(c) << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return;
	}	
	return;
}