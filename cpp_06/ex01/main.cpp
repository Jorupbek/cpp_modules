#include "Serialize.hpp"

int main()
{
	Data data;

	data.i = 555;
	data.f = 5.55f;
	data.d = 55.5;
	data.c = '5';
	data.s = "Five thousand five hundred fifty five";

	uintptr_t uptr_one = serialize(&data);
	uintptr_t uptr_two = uptr_one;

	Data *recover = deserialize(uptr_two);

	std::cout << "int: " << recover->i << std::endl;
	std::cout << "float: " << recover->f << std::endl;
	std::cout << "double: " << recover->d << std::endl;
	std::cout << "char: " << recover->c << std::endl;
	std::cout << "string: " << recover->s << std::endl;

	return (0);
}