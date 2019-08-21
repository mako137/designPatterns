//#include "AbstactFactory.h"
//
//
//
//AbstactFactory::AbstactFactory()
//{
//}
//
//
//AbstactFactory::~AbstactFactory()
//{
//}
//
//Toy::Toy(string name):name(name)
//{
//}
//
//Toy::~Toy()
//{
//}
//
//void Toy::Print() const
//{
//	cout << name << endl;
//}
//
//Bear::Bear(string name):Toy(name)
//{
//}
//
//Cat::Cat(string name):Toy(name)
//{
//}
//
//TeddyBear::TeddyBear():Bear("TeddyBear")
//{
//}
//
//TeddyCat::TeddyCat():Cat("TeddyCat")
//{
//
//}
//
//WoodBear::WoodBear():Bear("WoodBear")
//{
//}
//
//WoodCat::WoodCat():Cat("WoodCat")
//{
//}
//
//Bear * WoodenToys::createBear()
//{
//	return new WoodBear();
//}
//
//Cat * WoodenToys::createCat()
//{
//	return new WoodCat();
//}
//
//Bear * TeddyToys::createBear()
//{
//	return new TeddyBear();
//}
//
//Cat * TeddyToys::createCat()
//{
//	return new TeddyCat();
//}
//
//void useToys(IToysFactory * obj)
//{
//	Bear* a = obj->createBear();
//	Cat * b = obj->createCat();
//	a->Print();
//	b->Print();
//	
//}
