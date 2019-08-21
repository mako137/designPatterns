#include<iostream>
#include<string>
using namespace std;

class Singleton
{
public:
	~Singleton();
	static Singleton* getObj(int value =4100);
	int getValue();
	void setValue(int value);
private:
	int value;
	static Singleton * obj;
	Singleton(int v = 4100);

};

Singleton::Singleton(int v): value(v)
{
}

Singleton::~Singleton()
{
}

inline Singleton * Singleton::getObj(int value)
{
	if (obj == nullptr)
		obj = new Singleton(value);
	return obj;
}

inline int Singleton::getValue()
{
	return value;
}

 void Singleton::setValue(int value)
{
	 this->value = value;
}



 class Logger
 {
 public:
	 ~Logger();
	 static Logger* getObj(string value = "user");
	 string getValue();
	 void setValue(string value);
 private:
	 string value;
	 static Logger * obj;
	 Logger(string v = "user");

 };

 Logger::Logger(string value) : value(value)
 {
 }

 Logger::~Logger()
 {
 }

 inline Logger * Logger::getObj(string value)
 {
	 if (obj == nullptr)
	 {
		 obj = new Logger(value);
	 }
	 else
	 {
		 cout << obj->getValue() << " already logged\n";
	 }
	 return obj;
 }

 inline string Logger::getValue()
 {
	 return value;
 }

 void Logger::setValue(string value)
 {
	 this->value = value;
 }