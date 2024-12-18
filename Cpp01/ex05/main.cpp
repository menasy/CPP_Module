/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmyilm <mehmyilm@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:50:12 by mehmyilm          #+#    #+#             */
/*   Updated: 2024/12/11 22:27:51 by mehmyilm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl1;
	void (Harl::*ptrCoomp)(std::string) = &Harl::complain;

	(harl1.*ptrCoomp)("DEBUG");
	(harl1.*ptrCoomp)("INFO");
	(harl1.*ptrCoomp)("WARNING");
	(harl1.*ptrCoomp)("ERROR");
}
