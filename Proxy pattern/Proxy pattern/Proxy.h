#pragma once
#include<iostream>
#include<string>
#include<map>
#include<fstream>
using namespace std;

enum States
{
	CLOSED,
	OPEN
};
__interface IDoor
{
public:
	virtual void open() = 0;
	virtual void close() = 0;
	//virtual void ShowStatus() = 0;
};

class Door: public IDoor
{
private:
	bool state;
public:
	Door()
	{
		state = CLOSED;
	}
	void open()
	{
		state = OPEN;
		showStatus();
	}
	void close()
	{
		state = CLOSED;
		showStatus();
	}
	void showStatus()
	{
		cout << "Door is" << (state == CLOSED ? " closed" : " opened") << endl;
	}
	bool GetState() const;

};

typedef string LOGIN;
typedef string PASSWORD;
class SecureProxy
{
	LOGIN login;
	PASSWORD pass;
	map <LOGIN, PASSWORD> users;
	Door * door;
public:
	SecureProxy() = default;
	SecureProxy(Door * door);
	~SecureProxy();
	void open(LOGIN log, PASSWORD pas);
	void close();
	bool getAutorisation(LOGIN login, PASSWORD pas);
};

