#include "abstr.h"

Rectangle::Rectangle(int x, int y, int x2, int y2) :x(x), y(y), x2(x2), y2(y2)
{
}

void Rectangle::Draw()
{
	cout << "x - " << x << endl;
	cout << "y - " << y << endl;
	cout << "x2 - " << x2 << endl;
	cout << "y2 - " << y2 << endl;
}

RectAdapter::RectAdapter(int x, int y, int w, int h, string color) :Rectangle(x, y, x + w, y + w)
{
	this->color = color;
}

void RectAdapter::Draw()
{
	cout << "Background color: " << color << endl;
	Rectangle::Draw();

}

void CoffeMachineAdapter::MakeCoffe()
{
	CoffeMachine::MakeCoffe();

}

void CoffeMachineAdapter::MakeCoffeWithMilk()
{
	MakeCoffe();
	addMilk();
}

void CoffeMachineAdapter::ShowSum()
{
	cout << "Coffe used - " << coffe << endl;
	cout << "Milk used - " << milk << endl;
	cout << "Coffe with milk used - " << coffeWithMilk << endl;
}

bool CoffeMachine::enoughMilk()
{
	return milk > 0;
}

bool CoffeMachine::enoughCofee()
{
	return coffe > 0;
}

void CoffeMachine::ShowSum()
{
	cout << "Total price is " << totalPrice << endl;
}

CoffeMachine::CoffeMachine(int coffe, int milk) :coffe(coffe), milk(milk), totalPrice(0)
{
}

void CoffeMachine::MakeCoffe()
{
	if (enoughCofee())
	{
		cout << "coffe is preaparing\n";
		coffe--;
		totalPrice += 10;
		this->isPrepared = true;
	}
	else
		this->isPrepared = false;
}

void CoffeMachine::addMilk()
{
	if (isPrepared)
	{
		milk--;
		totalPrice += 2;
	}
	this->isPrepared = true;
}

NewCoffeMachine::NewCoffeMachine(int coffeWithMilk) :coffeWithMilk(coffeWithMilk)
{
}

void MakeSomeCoffe()
{
	NewCoffeMachine * coffe;
	coffe = new CoffeMachineAdapter();

	int choice;
	while (true)
	{
		system("cls");
		cout << "CoffeMachine 3000\n";
		cout << "1 - Make coffe\n";
		cout << "2 - Make coffe with milk\n";
		cout << "3 - Show used ingridients\n";
		cout << "4 - Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			coffe->MakeCoffe();
			break;
		}
		case 2:
		{
			coffe->MakeCoffeWithMilk();
			break;
		}
		case 3:
		{
			coffe->ShowSum();
			break;
		}
		case 4:
		{
			exit(0);
			break;
		}
		default:
			break;
		}
		system("pause");
	}

	delete coffe;
}
