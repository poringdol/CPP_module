/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemocri <sashe@bk.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 02:12:12 by pdemocri          #+#    #+#             */
/*   Updated: 2020/11/12 08:36:39 by pdemocri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main() {
	try {
		int i;
		std::cout << "Input number of zombies: "; 
		std::cin >> i;
		ZombieHorde horde(i);
		horde.announce();
	} catch (std::invalid_argument &ex) {
		std::cout << ex.what() << std::endl;
	}
}