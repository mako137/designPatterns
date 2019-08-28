#pragma once
#include<iostream>
#include<string>
#include<vector>


using namespace std;


class Component
{
public:
	Component(string name);
	string getName()const;
	virtual void Add(Component * comp) =0;
	virtual void Remove(int index) = 0;
	virtual Component * GetChild(int index) = 0;
	virtual void Operation() = 0;
	//virtual void ShowSize() = 0;
	virtual int GetSize()= 0;

private:
	string name;
};

class Composite:public Component
{
public:
	Composite(string name);
	void Add(Component * comp);
	void Remove(int index);
	Component * GetChild(int index);
	void Operation();
	int GetSize();
private:
	vector<Component*> tree;
	int sum =0;
};

class Unit: public Component
{
public:
	Unit(string name, int size);
	void Add(Component * comp);
	void Remove(int index);
	Component * GetChild(int index);
	void Operation();
	int GetSize();
private:
	int size;
};