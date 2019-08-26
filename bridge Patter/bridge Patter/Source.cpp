#include"WebPage.h"

int main()
{
	srand(time(0));
	
	Theme * them = new Dark();
	vector<WebPage*> vec;
	vec.push_back(new Home(them));
	vec.push_back(new About(them));
	vec.push_back(new Carees(them));


	for (auto temp : vec)
		cout << temp->GetContent() << endl;

	for (auto temp : vec)
		 delete temp;

	system("pause");
}