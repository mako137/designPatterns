#include "WebPage.h"



WebPage::WebPage(Theme * theme):th(theme)
{
}

WebPage::~WebPage()
{
}

Theme::Theme(string color):color(color)
{
}

string Theme::getColor()
{
	return color;
}

Dark::Dark():Theme("Dark")
{
}

Light::Light():Theme("Light")
{
}

Home::Home(Theme * pt):WebPage(pt)
{
}

string Home::GetContent()
{
	string page = "homepage " + th->getColor();
	return "homepage " + th->getColor();
}

About::About(Theme * pt):WebPage(pt)
{
}

string About::GetContent()
{
	return "About page " + th->getColor();
}

Carees::Carees(Theme * pt):WebPage(pt)
{
}

string Carees::GetContent()
{
	return  "Carees page " + th->getColor();
}

Painter::Painter(string color):color(color)
{
}



Figure::Figure(Painter * paint):paint(paint)
{
}

Pencil::Pencil(string color):Painter(color)
{
}

string Pencil::Draw()
{
	return  "Pencil with" + color + " color";
}

Brush::Brush(string color):Painter(color)
{
}

string Brush::Draw()
{
	return "Brush  with" + color + " color";
}

void Rectangle::Draw()
{
	cout << "Rectangle drawing " << paint->Draw();
	
}
