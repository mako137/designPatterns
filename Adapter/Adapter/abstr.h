#pragma once
#include<iostream>
#include<string>

using namespace std;

class Rectangle
{
public:
	Rectangle(int x,int y, int x2, int y2);
	void Draw();
private:
	int x;
	int y;
	int x2;
	int y2;
};

class NewRect
{
public:
	virtual void Draw() = 0;
protected:
	string color;
};

class RectAdapter:public NewRect, private Rectangle
{
public:
	RectAdapter(int x,int y, int w, int h, string color);
	void Draw();
};

class CoffeMachine
{
public:
	bool enoughMilk();
	bool enoughCofee();
	void ShowSum();
	CoffeMachine(int coffe = 10, int milk = 10);
	void MakeCoffe();
	void addMilk();
protected:
	int coffe;
	int milk;
	bool isPrepared = false;
	int totalPrice;

};

class NewCoffeMachine
{
public:
	NewCoffeMachine(int coffeWithMilk = 0);
	virtual void MakeCoffe() = 0;
	virtual void MakeCoffeWithMilk() = 0;
	
};

class CoffeMachineAdapter:public NewCoffeMachine, protected CoffeMachine
{
public:
	void MakeCoffe();
	void MakeCoffeWithMilk();
};


void MakeSomeCoffe();
