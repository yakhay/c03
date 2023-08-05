/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:25:02 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:33:57 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap (const std::string& Nom);
        void attack(const std::string& target);
		void guardGate();
		~ScavTrap();
};
#endif
