/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:01:13 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/25 13:04:07 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <cstdlib>

class ScalarConverter
{
	private:
	ScalarConverter();
	
	public:
	~ScalarConverter();
	static void Convert(std::string literral);
	
};