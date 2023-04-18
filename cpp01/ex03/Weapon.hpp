/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:46:31 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/18 22:07:26 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon();
        std::string getType(void);
        void setType(std::string type);
};
#endif
