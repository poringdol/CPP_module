/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdemocri <sashe@bk.ru>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 02:12:12 by pdemocri          #+#    #+#             */
/*   Updated: 2020/11/11 04:54:30 by pdemocri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string str_brain = "HI THIS IS BRAIN";
	std::string *ptr_brain = &str_brain;
	std::string& ref_brain = str_brain;
	
	std::cout << str_brain << std::endl;
	std::cout << *ptr_brain << std::endl;
	std::cout << ref_brain << std::endl;
}