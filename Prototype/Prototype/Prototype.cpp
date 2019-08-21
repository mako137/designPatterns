#include "Prototype.h"

Unit::Unit()
{
}

Unit::~Unit()
{
}

void Archer::play()
{
	cout << "Archer play\n";
}

Unit * Archer::clone()
{
	return new Archer(*this);
}

void Mage::play()
{
	cout << "Mage play\n";
}

Unit * Mage::clone()
{
	return new Mage(*this);
}

void Swordsmen::play()
{
	cout << "Swordsman play\n";
}

Unit * Swordsmen::clone()
{
	return new Swordsmen(*this);
}

Unit * CreatePrototype::createPl(TYPE temp)
{
	switch (temp)
	{
	case MAGE:
	case ARCH:
	case SWORDS:
		return prototypes[temp - 1]->clone();
		break;
	default:
		return prototypes[1]->clone();;
	}
}
