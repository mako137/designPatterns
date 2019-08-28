#include"Composit.h"

int main()
{
	Component * root = new Composite("root");
	Component * f1= new Composite("folder1");
	Component * f2= new Composite("folder2");
	Component * f3= new Composite("folder3");
	Component * f4= new Composite("folder4");
	Component * file= new Unit("file",10);
	Component * file1= new Unit("file1",10);
	Component * file2= new Unit("file2",10);
	Component * file3= new Unit("file",10);

	root->Add(f1);
	root->Add(f2);
	f1->Add(file);
	f1->Add(file1);
	f1->Add(file2);

	root->Operation();
	cout << f1->GetSize() << endl;


	cout << endl;
	system("pause");
}
