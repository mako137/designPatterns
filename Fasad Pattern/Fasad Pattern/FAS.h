#pragma once
#include<iostream>
#include<string>

using namespace std;




class Computer
{
public:
	void showScreen();
	void setSound();
	void closeALL();
	void showDesktop();
	void isReady();
private:

};

class Facade
{
public: 
	Facade();
	~Facade();
	void turnOn();
	void turnOff();

private:
	Computer * c;
};
