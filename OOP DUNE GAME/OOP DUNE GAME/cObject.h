#pragma once
#include <string>
#include <fstream>
#include <algorithm>
#include <string>
#include "iStringable.h"
#include <map>

using namespace std;


class cObject :
	public iStringable
{
//����
private:	string name;
private:	string description;
protected:	string ID;

		//������������
			/*����������� ������� �� ���������*/
public:		cObject();
			/*����������� ����������� �������*/
public:		cObject(const cObject &in_object);
			/*����������� � ����������� <��� �������, �������� �������>*/
public:		cObject(const string in_name, const string in_description);

		//����������
public:		virtual ~cObject();


//�������� ������ ������
			/*������ �������� ����� �� ����� � ������ this->name*/
public:		virtual map< string, string > *readFile();


//Set-Get ������ ������
			/*������ ��� �������*/
public:		virtual void setName(const string &in_name);
			/*������ �������� �������*/
protected:	virtual void setDescription(const string &in_description);
			/*����� ��� �������*/
public:		string getName()const;
			/*����� �������� �������*/
public:		string getDescription()const;
//���������� ��������� ����������
			/*�������� ����������*/
public:		virtual cObject* operator=(const cObject &value);

//������������ ������
			/*����� ���������� ���� � ������*/
public:		virtual string toString();

public:		string getID() const;
protected:	virtual void setID();

};

