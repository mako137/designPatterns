#include"Proxy.h"

int main()
{
	Door * door = new Door();
	SecureProxy * proxy = new SecureProxy(door);
	proxy->close();
	proxy->open("admin", "12");
	proxy->open("as", "12");
	system("pause");
}