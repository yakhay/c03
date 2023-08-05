/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:49:31 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:10:50 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	protected :
		std::string Name;
		int Hit;
		int Energy;
		int Attack_damage;
	public:
		ClapTrap();
		ClapTrap(const std:: string &Nom);
		void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
		~ClapTrap();

};

#endif
