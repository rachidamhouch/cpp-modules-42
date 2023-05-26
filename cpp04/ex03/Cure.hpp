#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
class Cure : public AMateria
{
    public:
        Cure();
        Cure(const std::string type);
        Cure(const Cure &copy);
        ~Cure();
        Cure& operator=(const Cure &copy);
        Cure	*clone() const;
		void	use(ICharacter &target);
};
#endif