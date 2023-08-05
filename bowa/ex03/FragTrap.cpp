/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:25:14 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:29:54 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
 	FragTrap::FragTrap (const std::string& Nom) : ClapTrap(Nom)
	{
		Hit = 100;
		Energy = 100;
		Attack_damage = 30;
	}
	void FragTrap::highFivesGuys(void) {
		std::cout << Name << " highFivesGuys " << std::endl;
	}
	void FragTrap::attack(const std::string& target)  {
	if (Hit > 0 && Energy > 0) {
		std::cout << Name << " ++attacks " << target << " with a special FragTrap attack and causes " << Attack_damage << " damage." << std::endl;
		Energy -= 1;
	}
	else {
		std::cout << Name << " can't attack in FragTrap" << std::endl;
		}
		}
		FragTrap::~FragTrap() {
		std::cout << "FragTrap " << Name << " is destructed." << std::endl;
	}
