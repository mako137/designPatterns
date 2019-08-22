#include"Builder.h"

int main()
{
	NoteBookShop *shop = new NoteBookShop();
	NoteBookBuilder * builder = new OfficeNoteBookBuilder();
	//NoteBookBuilder * office = new OfficeNoteBookBuilder();
	
	shop->createNoteBook(builder);
	cout << "Office NoteBook:\n";
	builder->GetDevice()->Show();
	delete builder;

	builder = new GamerNoteBookBuilder();
	shop->createNoteBook(builder);
	cout << "Gamer NoteBook:\n";
	builder->GetDevice()->Show();
	system("pause");
}