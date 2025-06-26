/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:57:56 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/26 14:20:07 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Base 
{
	public:
	virtual ~Base();
};

class A: public Base
{
	
};

class B : public Base
{
	
};

class C : public Base
{
	
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);