/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:35:49 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:41:22 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
    DiamondTrap(const std::string& name);
    void whoAmI();
    void attack(const std::string& target);
    ~DiamondTrap();
};
#endif
