/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: menasy <menasy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:12 by mehmyilm          #+#    #+#             */
/*   Updated: 2024/12/25 00:55:20 by menasy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "Dog Constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
    
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog Copy Assigment" << std::endl;
    if (this == &obj)
        return (*this);
    this->type = obj.type;
    return(*this);
}

void    Dog::makeSound() const
{
    std::cout << "Hav Hav!" << std::endl; 
}