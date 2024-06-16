/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 22:56:49 by alaassir          #+#    #+#             */
/*   Updated: 2024/06/16 01:35:40 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor is called\n";
	this->type = "Dog";
	this->_brain = new Brain();
	for (size_t i = 0; i < 100;i++)
		this->_brain->setIdea(i, "Dogs loves beef");
}

Dog	&Dog::operator=(const Dog &d)
{
	std::cout << "Dog assignement operator is called\n";
	this->type = d.type;
	return (*this);
}

Dog::Dog(const Dog &d)
{
	std::cout << "Dog copy constructor is called\n";
	*this = d;
}

Dog::~Dog()
{
	std::cout << "Dog desstructor is called\n";
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "haw haw haw haw haw\n";
}

std::string Dog::getType() const
{
	return (this->type);
}