/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:01:13 by lelanglo          #+#    #+#             */
/*   Updated: 2025/08/20 18:39:07 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <cctype>
#include <iostream>
#include <cstdlib>

class ScalarConverter
{
	private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &copy);
	ScalarConverter & operator=(ScalarConverter const &other);
	~ScalarConverter();
	
	public:
	static void Convert(std::string literral);
	
};