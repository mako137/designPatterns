#include "Composit.h"




Unit::Unit(string name, int size):Component(name), size(size)
{
}


void Unit::Add(Component * comp)
{
	throw exception("can't add folder to file");
}

void Unit::Remove(int index)
{
	throw exception("can't remove folder to file");
}

Component * Unit::GetChild(int index)
{
	throw exception("can't get child");
}

void Unit::Operation()
{
	cout << getName() << endl;
}

int Unit::GetSize()
{
	return this->size;
}

Component::Component(string name):name(name)
{
}

string Component::getName() const
{
	return this->name;
}


Composite::Composite(string name):Component(name)
{
}

void Composite::Add(Component * comp)
{
	tree.push_back(comp);
}

void Composite::Remove(int index)
{
	tree.erase(tree.begin() + index);
}

Component * Composite::GetChild(int index)
{
	if(index < tree.size() && index >=0)
	return tree[index];
	throw("Invalid index");
}

void Composite::Operation()
{
	cout << getName() << endl;
	for (auto elem : tree)
		elem->Operation();
}

void Composite::ShowFolder()
{
	for (auto elem : tree)
		cout << elem->getName() << endl;
}


int Composite::GetSize()
{
	
	for (auto elem : tree)
	{
		sum +=elem->GetSize();
	}
	return sum;
}

