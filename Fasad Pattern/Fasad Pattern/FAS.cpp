#include "FAS.h"




void Computer::showScreen()
{
	cout << "Screen is showing\n";
}

void Computer::setSound()
{
	cout << "Sound is set\n";
}

void Computer::closeALL()
{
	cout << "Aplication is closed\n";
}

void Computer::showDesktop()
{
	cout << "Desktop is showing\n";
}

void Computer::isReady()
{
	cout << "Computer is ready\n";
}

Facade::Facade()
{
	this->c = new Computer();
}

Facade::~Facade()
{
	delete this->c;
}

void Facade::turnOn()
{
	cout << "Computer is turning on\n";
	c->showScreen();
	c->setSound();
	c->isReady();
	c->showDesktop();
}

void Facade::turnOff()
{
	cout << "Computer is turning off\n";
	c->closeALL();
}
