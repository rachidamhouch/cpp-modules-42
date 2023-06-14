#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>

struct Data {
	int	x;
    int y;
};

class  Serializer
{
    private:
        Serializer();
		Serializer(Serializer const &copy);
		~Serializer();
		Serializer& operator=(Serializer const & copy);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
#endif