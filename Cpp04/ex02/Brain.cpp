/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: menasy <menasy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:12 by mehmyilm          #+#    #+#             */
/*   Updated: 2024/12/25 22:29:34 by menasy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
    
}


Brain::Brain(const Brain& obj)
{
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain Copy Assigment" << std::endl;
    if (this == &obj)
        return (*this);
    return(*this);
}

void Brain::setIdeas(int index, std::string idea)
{
    if (index < 0 || index > 99)
    {
        std::cout<< "Invalid index !" << std::endl;
        return ;
    }
    this->ideas[index] = idea;
}
std::string Brain::getIdeas(int index)
{
     if (index < 0 || index > 99)
    {
        std::cout<< "Invalid index !" << std::endl;
        return NULL;
    }
    return(this->ideas[index]);
}