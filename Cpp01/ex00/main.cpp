/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmyilm <mehmyilm@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:12 by mehmyilm          #+#    #+#             */
/*   Updated: 2024/12/11 23:47:46 by mehmyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	std::cout<<">>>>>>>> Zombie in stack <<<<<<<<"<<std::endl;
	randomChump("zMert");
	std::cout<<">>>>>>>> Zombie in heap <<<<<<<<<"<<std::endl;
	Zombie	*zSamet = newZombie("zSamet");
	zSamet->announce();

	delete zSamet;
	return (0);
}
