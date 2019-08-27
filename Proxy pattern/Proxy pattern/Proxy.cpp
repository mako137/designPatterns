#include "Proxy.h"

SecureProxy::SecureProxy(Door * door) :door(door)
{
	ifstream in("users.db");
	string log, passw;
	if (in.is_open())
	{
		while (!in.eof())
		{
			in >> log;
			in >> passw;
			users[log] = passw;
		}
	}
	else
	{
		cout << "Error\n";
	}
}

SecureProxy::~SecureProxy()
{
	delete door;
}

void SecureProxy::open(LOGIN log, PASSWORD pas)
{
	if (door->GetState() == OPEN)
	{
		door->showStatus();
		return;
	}
	if (getAutorisation(log, pas))
		door->open();
	else
		cout << "Acces is denied\n";
}

void SecureProxy::close()
{
	if (door->GetState() == CLOSED)
	{
		cout << "Door was closed\n";
		return;
	}
	door->close();
}

bool SecureProxy::getAutorisation(LOGIN login, PASSWORD pas)
{
	auto it = users.find(login);
	if (it != users.end())
	{
		if (it->second == pas)
			return true;
	}
	return false;
}

bool Door::GetState() const
{
	return state;
}
