#pragma once
#include<iostream>
#include<string>
#include<map>

using namespace std;
class Builder
{
public:
	Builder();
	~Builder();
};

class NoteBook
{
public:
	NoteBook(string name);
	string getPart(const string & key);
	void setPart(const string & key, string value);
	void Show() const;
	bool CheckPart(const string & key) const;
private:
	string name;
	map<string, string> paramters;
	
};

class NoteBookBuilder
{
protected:
	NoteBook* device;
public:
	NoteBookBuilder();
	virtual~NoteBookBuilder();
	virtual void SetMemory() = 0;
	virtual void SetHDD() = 0;
	virtual void SetMatrix() = 0;
	virtual void SetProcessor() = 0;
	virtual NoteBook* GetDevice();

};

class GamerNoteBookBuilder:public NoteBookBuilder
{
public:
	GamerNoteBookBuilder();
	void SetMemory();
	void SetHDD();
	void SetMatrix();
	void SetProcessor();
};
class OfficeNoteBookBuilder :public NoteBookBuilder
{
public:
	OfficeNoteBookBuilder();
	void SetMemory();
	void SetHDD();
	void SetMatrix();
	void SetProcessor();
};
class CustomNoteBookBuilder :public NoteBookBuilder
{
public:
	CustomNoteBookBuilder();
	void SetMemory();
	void SetHDD();
	void SetMatrix();
	void SetProcessor();
};

class NoteBookShop
{
public:
	void createNoteBook(NoteBookBuilder * note);
};