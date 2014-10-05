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

		//������������
			/*������ ����������� �������*/
public:		cObject();
			/*����������� ����������� �������*/
public:		cObject(const cObject &in_object);
			/*��������������� ����������� �������*/
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
//������������ ������
			/*����� ���������� ���� � ������*/
public:		string toString();


};

