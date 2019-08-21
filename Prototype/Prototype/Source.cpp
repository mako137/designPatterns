#include"Prototype.h"

Unit * CreatePrototype::prototypes[] = {new Mage(), new Archer(), new Swordsmen()};

int main()
{
	int choice = 10;
	vector<Unit*> team;
	vector<Unit*> team2;
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
			team.push_back(CreatePrototype::createPl((TYPE)choice));
		
	}

	cout << "team 1: \n";
	for (auto temp : team)
		temp->play();

	for (int i = 0; i < team.size(); i++)
	{
		team2.push_back(team[i]->clone());
	}

	cout << "team 2: \n";
	for (auto temp : team2)
		temp->play();
	system("pause");
}
