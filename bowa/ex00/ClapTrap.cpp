/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:56:43 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 17:09:11 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

	ClapTrap::ClapTrap():Hit(10),Energy(10),Attack_damage(0)
	{
		std::cout << "Default constructor ClapTrap" << std::endl;
	}
	ClapTrap::ClapTrap(const std:: string &Nom):Name(Nom),Hit(10),Energy(10),Attack_damage(0)
	{
		std::cout << "Pram constructor ClapTrap" << std::endl;
	}
	void ClapTrap::attack(const std::string& target) {
		if (Hit > 0 && Energy > 0) {
			std::cout << Name << " attacks " << target << " and causes " << Attack_damage << " damage." << std::endl;
			Energy -= 1;
		}
		else {
			std::cout << Name << " can't attack due to lack of hit points or energy." << std::endl;
		}
    }

    void ClapTrap::takeDamage(unsigned int amount) {
        if (Hit > 0) {
            Hit -= amount;
            std::cout << Name << " takes " << amount << " damage." << std::endl;
        }
        if (Hit <= 0) {
            std::cout << Name << " has no hit points left." << std::endl;
        }
    }
	void ClapTrap::beRepaired(unsigned int amount) {
		if (Hit > 0) {
			Hit += amount;
			std::cout << Name << " is repaired by " << amount << " hit points." << std::endl;
		}
		else {
			std::cout << Name << " can't be repaired as it has no hit points left." << std::endl;
		}
    }
    ClapTrap::~ClapTrap()
    {
		std::cout << "ClapTrap " << Name << " is destructed." << std::endl;
    }
