/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:25:08 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:33:37 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
  ScavTrap::ScavTrap (const std::string& Nom) : ClapTrap(Nom)
        {
             Hit = 100;
            Energy = 50;
            Attack_damage = 20;
        }
        void ScavTrap::attack(const std::string& target)  {
        if (Hit > 0 && Energy > 0) {
            std::cout << Name << " ++attacks " << target << " with a special ScavTrap attack and causes " << Attack_damage << " damage." << std::endl;
            Energy -= 1;
        }
        else {
            std::cout << Name << " can't attack" << std::endl;
        }
		}
		void ScavTrap::guardGate() {
			std::cout << Name << " Gatekeeper" << std::endl;
		}
		ScavTrap::~ScavTrap() {
			std::cout << "ScavTrap " << Name << " is destructed." << std::endl;
		}
