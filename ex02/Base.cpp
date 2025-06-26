/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:10:45 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/26 14:28:23 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <iostream>
#include <time.h>

Base::~Base() {};

Base *generate()
{
	std::srand(time(NULL));
    int random = std::rand() % 3;
	switch (random)
	{
	case 0:
		return new A;
		break;
	
	case 1:
		return new B;
		break;
	case 2:
		return new C;
		break;
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "This is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "This is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "This is C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A &> (p);
		std::cout << "This is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "";
	}
	try
	{
		B b = dynamic_cast<B &> (p);
		std::cout << "This is B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "";
	}
	try
	{
		C c = dynamic_cast<C &> (p);
		std::cout << "This is C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "";
	}
}