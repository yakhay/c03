/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:51:09 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:53:34 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
       ClapTrap clapTrap("Clappy");
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);

    std::cout << "-----" << std::endl;

    ScavTrap scavTrap("Scavvy");
    scavTrap.attack("Enemy");
    scavTrap.guardGate();

    return 0;
}
