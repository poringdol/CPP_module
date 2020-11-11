/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemocri <sashe@bk.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 02:12:12 by pdemocri          #+#    #+#             */
/*   Updated: 2020/11/11 03:58:09 by pdemocri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include <ctime>
#include <unistd.h>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main() {
	try {
		ZombieHorde horde(3);
		horde.announce();
	} catch 
	(std::invalid_argument& ex) {
		std::cout << ex.what() << std::endl;
	}
}