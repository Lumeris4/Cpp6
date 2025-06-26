/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:18:48 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/26 12:07:26 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data test;
	Data *broudic;
	test.str = "lalala";
	test.n = 5;

	std::cout << test.n << std::endl;
	std::cout << test.str << std::endl;
	uintptr_t ptr = Serializer::serialize(&test);
	std::cout << ptr << std::endl;
	broudic = Serializer::deserialize(ptr);
	std::cout << broudic->n << std::endl;
	std::cout << broudic->str << std::endl;
}