/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:19:00 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/02 16:22:24 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap: public ClapTrap
{
    public:
        FragTrap (const std::string& Nom);
        void highFivesGuys(void);
        void attack(const std::string& target);
         ~FragTrap();
};
#endif
