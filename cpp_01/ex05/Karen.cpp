#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[DEBUG] " << "I love to get extra bacon. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO] " << "I cannot believe adding extra bacon cost more money." << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING] " << "I think I deserve to have some extra bacon for free. " << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR] " << "I want to speak to the manager now. " << std::endl;
}

Karen::action Karen::funcs[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

void Karen::complain(std::string level)
{
	std::string levels[] = { "debug", "info", "warning", "error" };

	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;

	switch (i)
	{
		default:
			(this->*funcs[i])();
	}
}