#pragma once
//#include"Header.h"
#include<iostream>
#include<string>
using namespace std;


class Toy abstract
{
public:
	Toy(string name);
	~Toy();
	void Print() const;
private:
	string name;
};

class Bear :public Toy
{
public:
	Bear(string name = "bear");
};


class Cat :public Toy
{
public:
	Cat(string name = "cat");
};

class TeddyBear:public Bear
{
public:
	TeddyBear();
};

class TeddyCat :public Cat
{
public:
	TeddyCat();
};

class WoodBear :public Bear
{
public:
	WoodBear();
};

class WoodCat :public Cat
{
public:
	WoodCat();
};

__interface IToysFactory
{
public:
	virtual Bear * createBear() = 0;
	virtual Cat* createCat() = 0;
};

class WoodenToys:public IToysFactory
{
public:
	Bear * createBear();
	Cat * createCat();
};

class TeddyToys :public IToysFactory
{
public:
	Bear * createBear();
	Cat * createCat();
};

void useToys(IToysFactory* obj);
