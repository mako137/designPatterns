#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

enum TYPE {MAGE =1, ARCH, SWORDS};

class Unit
{
public:
	Unit();
	virtual ~Unit();
	virtual void play() = 0;
private:

};

class Archer: public Unit
{
public:
	void play();
};

class Mage : public Unit
{
public:
	void play();

};

class Swordsmen : public Unit
{
public:
	void play();
};

class FactoryMethod
{
public:
	virtual Unit * createPlayer() = 0;
};

class MageFactoryMethod: public FactoryMethod
{
public:
	Unit * createPlayer();
};

class SwordsmenFactoryMethod : public FactoryMethod
{
public:
	Unit * createPlayer();
};

class ArcherFactoryMethod : public FactoryMethod
{
public:
	Unit * createPlayer();
};

class FactoryMethodWParametr
{
public:
	static Unit * createPlayer(TYPE temp);
};