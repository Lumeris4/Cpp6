/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:59:19 by lelanglo          #+#    #+#             */
/*   Updated: 2025/06/26 14:38:11 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <string>
#include <iostream>

typedef struct s_data
{
	std::string str;
	int	n;
}	Data;

class Serializer
{
	private:
	Serializer();
	~Serializer();
	Serializer(const Serializer &copy);
	Serializer &operator=(Serializer const &other);

	public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};