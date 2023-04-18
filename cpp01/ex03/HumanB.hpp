/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:46:20 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/18 22:19:47 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(void);
        HumanB(std::string anme);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon *weapon);
};
#endif
