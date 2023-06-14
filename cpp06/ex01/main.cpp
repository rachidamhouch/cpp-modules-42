#include " Serializer.hpp"

int main()
{
	Data seData = {10, 4};

	uintptr_t serialize = Serializer::serialize(&seData);
	Data* deserialize = Serializer::deserialize(serialize);
	if (deserialize == &seData)
		std::cout << "Tt's work" << std::endl;
	else
		std::cout << "Tt's not work" << std::endl;
	return 0;
    return (0);
}
