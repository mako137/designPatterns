#include "Observ.h"



Product::Product(string name, double price):name(name), price(price)
{
}

void Product::Attach(Buyer * buyer)
{
	buyers.push_back(buyer);
}

void Product::Detach(Buyer * buyer)
{
	for (int i = 0; i < buyers.size();i++)
	{
		if (buyers[i] == buyer)
		{
			buyers.erase(buyers.begin() + i);
			return;
		}
	}
	cout << "No such buyer\n";
}

string Product::GetName() const
{
	return name;
}

double Product::GetPrice() const
{
	return price;
}

void Product::SetPrice(double price)
{
	if (price < this->price)
	{
		Notify();
		this->price = price;
	}
}

void Product::Notify()
{
	for (auto elem : buyers)
		elem->Update(this);
}

UkrainianBuyer::UkrainianBuyer(string name):name(name)
{
}

void UkrainianBuyer::Update(Product * prod)
{

	cout << "Hello, " << name << "!\n";
	cout << "Product " << prod->GetName() << " updated price!\n";
}

Product* UkrainianBuyer::GetProduct()
{
	return this->ptr;
}

void UkrainianBuyer::SetProduct(Product * prod)
{
	this->ptr = prod;
}

Car::Car(string name, double price):Product(name,price)
{
}
