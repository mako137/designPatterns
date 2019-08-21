#include "FactoryMethod.h"

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

void Mage::play()
{
	cout << "Mage play\n";
}

void Swordsmen::play()
{
	cout << "Swordsman play\n";
}

Unit * MageFactoryMethod::createPlayer()
{
	return new Mage();
}

Unit * SwordsmenFactoryMethod::createPlayer()
{
	return new Swordsmen();
}

Unit * ArcherFactoryMethod::createPlayer()
{
	return new Archer();
}
