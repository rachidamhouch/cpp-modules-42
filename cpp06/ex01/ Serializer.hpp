#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
class  Serializer
{
    private:
        Serializer();
		Serializer(Serializer const &copy);
		~Serializer();
		Serializer& operator=(Serializer const & copy);
    public:
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};
#endif