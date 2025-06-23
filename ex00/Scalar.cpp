/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:44:56 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/23 14:06:48 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::~ScalarConverter() {};

std::string What_type(std::string &literral)
{
	
}

void ScalarConverter::Convert(std::string &litteral)
{
	if (!What_type(litteral).compare("string"))
		convertchar("string", litteral);
	
}