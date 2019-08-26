#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<time.h>

using namespace std;
class Theme
{
public:
	Theme(string color);
	string getColor();
private:
	string color;

};

class Dark:public Theme
{
public:
	Dark();
};

class Light: public Theme
{
public:
	Light();
};

class WebPage
{
public:
	WebPage(Theme * theme);
	virtual string GetContent() = 0;
	~WebPage();
protected:
	Theme * th;
};

class Home :public WebPage
{
public:
	Home(Theme * pt);
	string GetContent();
};

class About :public WebPage
{
public:
	About(Theme * pt);
	string GetContent();
};

class Carees :public WebPage
{
public:
	Carees(Theme * pt);
	string GetContent();
};



class Painter
{
public:
	Painter(string color);
	virtual string Draw() = 0;
protected:
	string color;
};

class Pencil : public Painter
{
public:
	Pencil(string color);
	string Draw();
};

class Brush : public Painter
{
public:
	Brush(string color);
	string Draw();
};

class Figure
{
public:
	Figure(Painter * brush);
	virtual void Draw() = 0;
protected:
	Painter * paint;
};

class Rectangle:public Figure
{
public:
	void Draw();

};

class Triangle :public Figure
{
public:
	void Draw();
};

class Cirlce :public Figure
{
	public:
		void Draw();
};