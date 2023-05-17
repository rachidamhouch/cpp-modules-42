/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:54 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:55 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &Scav);
        FragTrap& operator=(FragTrap &Scav);
        void highFivesGuys(void);
};
#endif