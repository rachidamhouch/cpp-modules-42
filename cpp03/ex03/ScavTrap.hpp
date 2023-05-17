/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:48:26 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:48:27 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap : public virtual ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &Scav);
        ScavTrap& operator=(ScavTrap &Scav);
        void guardGate(void);
};
#endif