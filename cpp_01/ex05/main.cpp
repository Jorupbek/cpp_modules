#include "Karen.hpp"

int main()
{
	Karen tmp = Karen();
	Karen tmp2 = Karen();
	std::string levels[] = {"debug", "info", "warning", "error"};

	for (unsigned int i = 0; i < 4; i++)
		tmp.complain(levels[i]);
	return (0);
}