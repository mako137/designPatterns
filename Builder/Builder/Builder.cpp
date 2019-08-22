#include "Builder.h"



Builder::Builder()
{
}


Builder::~Builder()
{
}

GamerNoteBookBuilder::GamerNoteBookBuilder()
{
	device = new NoteBook("Gamer NoteBook");
}

void GamerNoteBookBuilder::SetMemory()
{
	device->setPart("memory", "64GB");
}

void GamerNoteBookBuilder::SetHDD()
{
	device->setPart("HDD", "1TB");
}

void GamerNoteBookBuilder::SetMatrix()
{
	device->setPart("matrix", "1920x1080");
}

void GamerNoteBookBuilder::SetProcessor()
{
	device->setPart("proc", "intel i9");
}

NoteBookBuilder::NoteBookBuilder()
{
}

NoteBookBuilder::~NoteBookBuilder()
{
}

NoteBook * NoteBookBuilder::GetDevice()
{
	return device;
}

OfficeNoteBookBuilder::OfficeNoteBookBuilder()
{
	device = new NoteBook("Office NoteBook");
}

void OfficeNoteBookBuilder::SetMemory()
{
	device->setPart("memory", "8GB");
}

void OfficeNoteBookBuilder::SetHDD()
{
	device->setPart("HDD", "128GB");
}

void OfficeNoteBookBuilder::SetMatrix()
{
	device->setPart("matrix", "800x600");
}

void OfficeNoteBookBuilder::SetProcessor()
{
	device->setPart("proc", "intel i3");
}

CustomNoteBookBuilder::CustomNoteBookBuilder()
{
	device = new NoteBook("Custom NoteBook");
}

void CustomNoteBookBuilder::SetMemory()
{
	cout << "Enter parametr of memory:";
	string temp;
	cin >> temp;
	device->setPart("memory", temp);
}

void CustomNoteBookBuilder::SetHDD()
{
	cout << "Enter parametr of HDD:";
	string temp;
	cin >> temp;
	device->setPart("HDD", temp);
}

void CustomNoteBookBuilder::SetMatrix()
{
	cout << "Enter parametr of matrix:";
	string temp;
	cin >> temp;
	device->setPart("matrix", temp);
}

void CustomNoteBookBuilder::SetProcessor()
{
	cout << "Enter parametr of processor:";
	string temp;
	cin.ignore();
	getline(cin,temp);
	device->setPart("proc", temp);
}

NoteBook::NoteBook(string name):name(name)
{
}

string NoteBook::getPart(const string & key)
{
	return paramters[key];
}

void NoteBook::setPart(const string & key, string value)
{
	if(!CheckPart(key))
		paramters[key] = value;
}

void NoteBook::Show() const
{
	for (auto temp : paramters)
		cout << temp.first << " - "<< temp.second << endl;
}

bool NoteBook::CheckPart(const string & key) const
{
	return paramters.find(key) != paramters.end();
}

void NoteBookShop::createNoteBook(NoteBookBuilder * note)
{
	note->SetHDD();
	note->SetMatrix();
	note->SetMemory();
	note->SetProcessor();
}
