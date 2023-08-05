/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:51:09 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 17:01:58 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    ClapTrap clapTrap("Clappy");
    clapTrap.~ClapTrap();

    std::cout << "-----" << std::endl;

    FragTrap fragTrap("Fraggy");
    fragTrap.attack("Enemy");

    std::cout << "-----" << std::endl;

    ScavTrap scavTrap("Scavvy");
    scavTrap.attack("Enemy");
    scavTrap.guardGate();

    std::cout << "-----" << std::endl;

    DiamondTrap diamondTrap("Diamond");
    diamondTrap.attack("Enemy");
    diamondTrap.guardGate();
    diamondTrap.whoAmI();

}
