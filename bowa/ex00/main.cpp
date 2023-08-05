/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:51:09 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 17:03:28 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrap1("Clappy");
    clapTrap1.attack("Enemy");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(3);

    return 0;
}
