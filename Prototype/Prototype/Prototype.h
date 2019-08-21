#include<iostream>
#include<string>
#include<vector>

using namespace std;

enum TYPE { MAGE = 1, ARCH, SWORDS };

class Unit
{
public:
	Unit();
	virtual ~Unit();
	virtual void play() = 0;
	virtual Unit * clone() = 0;
private:

};

class Archer : public Unit
{
public:
	void play();
	Unit * clone();
};

class Mage : public Unit
{
public:
	void play();
	Unit * clone();
};

class Swordsmen : public Unit
{
public:
	void play();
	Unit * clone();
};

class CreatePrototype
{
public:
	static Unit* createPl(TYPE temp);
private:
	static Unit * prototypes[];

};