#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Buyer;
class Product
{
public:
	Product(string name, double price);
	void Attach(Buyer * buyer);
	void Detach(Buyer * buyer);
	string GetName() const;
	double GetPrice() const;
	void SetPrice(double price);
	void Notify();
private:
	vector<Buyer *> buyers;
	string name;
	double price;

};

class Buyer
{
public:
	virtual void Update(Product * prod) = 0;
};

class UkrainianBuyer:public Buyer
{
public:
	UkrainianBuyer(string name);
	void Update(Product * prod);
	Product* GetProduct();
	void SetProduct(Product * prod);
private:
	string name;
	Product * ptr;
};

class Car :public Product
{
public:
	Car(string name, double price);
};