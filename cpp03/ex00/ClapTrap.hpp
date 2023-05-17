#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name, int Hit_points, int Energy_points, int Attack_damage);
        ClapTrap(ClapTrap &Clap);
        ClapTrap& operator=(ClapTrap &Clap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
