/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:46:14 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/18 22:21:16 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name ,Weapon &weapon);
        ~HumanA();
        void attack(void);
};
#endif
