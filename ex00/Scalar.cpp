/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:44:56 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/25 15:09:40 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::~ScalarConverter() {};

std::string What_type(std::string literral)
{
	if (literral.length() == 1 && isalpha(literral[0]))
	{
		return "char";
	}
	if (literral[0] == '-' || isdigit(literral[0]))
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
	if (literral[literral.length() - 1] == 'f') 
	{
		return "float";
	}
	else
	{
		return "double";
	}
	return "special";
}

void ScalarConverter::Convert(std::string litteral)
{
	std::cout << What_type(litteral) << std::endl; 
	if (!What_type(litteral).compare("char"))
	{
		char c = litteral[0];
		std::cout << "char: " << static_cast<char>(c) << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return;
	}
	else if (!What_type(litteral).compare("double"))
	{
		double c = atof(litteral.c_str());
		if (isprint(c))
			std::cout << "char: " << static_cast<char>(c) << std::endl;
		else 
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) <<std::endl;
		return;
	}
	else if (!What_type(litteral).compare("float"))
	{
		float c = atof(litteral.c_str());
		if (isprint(c))
			std::cout << "char: " << static_cast<char>(c) << std::endl;
		else 
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
		return;
	}
	else if (!What_type(litteral).compare("int"))
	{
		int c = atoi(litteral.c_str());
		if (isprint(c))
			std::cout << "char: " << static_cast<char>(c) << std::endl;
		else 
			std::cout << "char: " << "Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return;
	}
	else if (!What_type(litteral).compare("special"))
	{
		if (litteral == "nan" || litteral == "nanf")
		{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
		return;
		}
		else if (litteral == "-inff")
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "impossible" << std::endl;
			std::cout << "double: " << "impossible" << std::endl;
		}
		else if (litteral == "+inff")
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "impossible" << std::endl;
			std::cout << "double: " << "impossible" << std::endl;
		}
	}
	else
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
	return;
}
