/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:44:56 by lelanglo          #+#    #+#             */
/*   Updated: 2025/08/20 18:38:54 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <limits>

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(ScalarConverter const &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {};

std::string What_type(std::string literal)
{
    if (literal == "nan" || literal == "nanf" ||
        literal == "+inf" || literal == "-inf" ||
        literal == "+inff" || literal == "-inff")
        return "special";

    if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
        return "char";

    bool has_point = false;
    bool has_f = false;
    bool has_digit = false;
    size_t i = 0;

    if (literal[i] == '+' || literal[i] == '-')
        i++;

    for (; i < literal.length(); ++i)
    {
        if (isdigit(literal[i]))
            has_digit = true;
        else if (literal[i] == '.' && !has_point)
            has_point = true;
        else if (literal[i] == 'f' && i == literal.length() - 1)
            has_f = true;
        else
            return "invalid";
    }

    if (!has_digit)
        return "invalid";
    if (has_point && has_f)
        return "float";
    if (has_point)
        return "double";
    if (has_f)
	{
        return "invalid";
	}
	long value = atol(literal.c_str());
	if (value > __INT_MAX__ || (value <= -2147483648))
    	return "invalid";
	else
		return "int";
}

void ScalarConverter::Convert(std::string litteral)
{
	std::cout << What_type(litteral) << std::endl;
	std::string type = What_type(litteral);
	if (type == "char")
	{
		char c = litteral[0];
		std::cout << "char: " << static_cast<char>(c) << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return;
	}
	else if (type == "double")
	{
		double c = atof(litteral.c_str());
		if (!isascii((int)c))
		{
			std::cout << "char: " << "Impossible" << std::endl;
		}
		else if (isprint((int)c))
			std::cout << "char: " << static_cast<char>(c) << std::endl;
		else 
			std::cout << "char: " << "Non displayable" << std::endl;
		if (c < __INT_MAX__ && c >= -2147483648)
			std::cout << "int: " << static_cast<int>(c) << std::endl;
		else 
			std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) <<std::endl;
		return;
	}
	else if (type == "float")
	{
		float c = atof(litteral.c_str());
		if (!isascii((int)c))
		{
			std::cout << "char: " << "Impossible" << std::endl;
		}
		else if (isprint((int)c))
			std::cout << "char: " << static_cast<char>(c) << std::endl;
		else 
			std::cout << "char: " << "Non displayable" << std::endl;
		if ((long long)c < __INT_MAX__ && c > -2147483648)
			std::cout << "int: " << static_cast<int>(c) << std::endl;
		else 
			std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
		return;
	}
	else if (type == "int")
	{
		int c = atoi(litteral.c_str());
		if (!isascii((int)c))
		{
			std::cout << "char: " << "Impossible" << std::endl;
		}
		else if (isprint((int)c))
			std::cout << "char: " << static_cast<char>(c) << std::endl;
		else 
			std::cout << "char: " << "Non displayable" << std::endl;
		if ((int)c < __INT_MAX__ || c > -2147483648)
			std::cout << "int: " << static_cast<int>(c) << std::endl;
		else 
			std::cout << "int: Impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
		return;
	}
	else if (type == "special")
	{
		if (litteral == "nan" || litteral == "nanf")
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "nanf" << std::endl;
			std::cout << "double: " << "nan" << std::endl;
			return;
		}
		else if (litteral == "-inff" || litteral == "-inf")
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "-inff" << std::endl;
			std::cout << "double: " << "-inf" << std::endl;
		}
		else if (litteral == "+inff" || litteral == "+inf")
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "+inff" << std::endl;
			std::cout << "double: " << "+inf" << std::endl;
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
