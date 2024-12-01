/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmyilm <mehmyilm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:29:49 by mehmyilm          #+#    #+#             */
/*   Updated: 2024/12/01 18:43:01 by mehmyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook phnBook;
	while (true)
	{
		std::cout<<"Enter command: ";
		std::cin>>command;

		if (command == "EXIT")
			phnBook.exit();
		else if (command == "ADD")
			phnBook.add();
		else if (command == "SEARCH")
			phnBook.search();
	}
}
