/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:44:56 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/23 14:20:04 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::~ScalarConverter() {};

std::string What_type(std::string literral)
{
	if ((literral[0] == '-' && isdigit(literral[1])) || isdigit(literral[0]))
	{
		return "int";
	}
	return "lala";
}

void ScalarConverter::Convert(std::string litteral)
{
	if (!What_type(litteral).compare("int"))
		std::cout << "yes" << std::endl;	
	
}