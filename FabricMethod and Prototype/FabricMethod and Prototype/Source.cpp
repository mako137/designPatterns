#include "FactoryMethod.h"

int main()
{
	MageFactoryMethod a;
	ArcherFactoryMethod b;
	SwordsmenFactoryMethod c;

	FactoryMethod * factory[] = { &a,&b,&c };
	vector<Unit*> team;
	int choice = 10;
	Unit* pl;
	while (choice != 0)
	{
		system("cls");
		cout << "Choose warrior type\n";
		cout << "1 - Mage\n";
		cout << "2 - Archer\n";
		cout << "3 - Swordsmane\n";
		cout << "0 - Stop adding\n";
		cin >> choice;
		if (choice)
			team.push_back(FactoryMethodWParametr::createPlayer((TYPE)choice));
		/*switch (choice)
		{
		case 0:
		{
			break;
		}
		case MAGE:
		case ARCH:
		case SWORDS:		
			pl = factory[choice - 1]->createPlayer();
			team.push_back(pl);		
			break;
		default:
		{
			cout << "Wrong choice\n";
			break;
		}
		}
		*/
	}

	
	for (auto temp : team)
		temp->play();

	for (auto temp : team)
		delete temp;
	system("pause");
}