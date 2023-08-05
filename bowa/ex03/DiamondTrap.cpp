/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:38:00 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:38:39 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
   DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name),FragTrap(name) {
        std::cout << "DiamondTrap " << name << " is constructed." << std::endl;
    }
    void DiamondTrap::whoAmI() {
        std::cout << "I am DiamondTrap " << Name << " and my ClapTrap name is " << ClapTrap::Name << "." << std::endl;
    }
    void DiamondTrap::attack(const std::string& target){
        this->ScavTrap::attack(target);
    }
    DiamondTrap::~DiamondTrap() {
        std::cout << "DiamondTrap "  << " is destructed." << std::endl;
    }
