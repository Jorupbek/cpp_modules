#include "iostream"

class Gun {
public:
	virtual void Shoot()
	{
		std::cout << "Bang!!" << std::endl;
	}
};

class SubmashineGun : public Gun {
public:
	void Shoot() override
	{
		std::cout << "Bang!!! Bang!!! Bang!!!" << std::endl;
	}
};

int main()
{
	Gun g;
	g.Shoot();

	SubmashineGun s;
	s.Shoot();
}