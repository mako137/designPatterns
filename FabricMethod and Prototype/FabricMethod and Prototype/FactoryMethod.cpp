#include "FactoryMethod.h"

Unit * FactoryMethodWParametr::createPlayer(TYPE temp)
{
	switch (temp)
	{
	case MAGE: return new Mage();
	case ARCH: return new Archer();
	default: return new Swordsmen();
	}
	return nullptr;
}
