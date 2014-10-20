#pragma once
#include "cObject.h"
#include "iClonable.h"
#include "iStringable.h"
#include "cController.h"

class cUnit :
	public cObject,
	public iClonable

{
	/*����*/
private:	bool isFlying;
private:	int armor;
private:	cController *controller;

	/*������������*/
			/*����������� ������� �� ���������*/
public:		cUnit();
			/*����������� cUnit � ����������� <������� �����, �����>*/
public:		cUnit(const cObject &value, int armor_value);
			/*����������� �����������*/
public:		cUnit(const cUnit &value);
	/*����������*/
public:		virtual ~cUnit();

	/*Set-Get ������ ������*/
			/*���������� ��������� �� ������ � �������*/
public:		bool getFlying() const;
			/*����� ������� �������� �����*/
public:		int	getArmor() const;

			/*������ ��������� �������� � ������� ��� �� �����*/
public:		virtual void setFlying(bool value);
			/*������ ���������� �������� �����*/
public:		virtual void addArmor(int value);
			/*������ ����������� �����*/
private:	void setArmor(int value);
			/*������ ���������� �����*/
public:		cController* getController()const;

	/*������������ ������*/
			//���������� � ������
public:		virtual string toString();
			//������������
public:		virtual cObject* clone();
	/*������������� �� ���������� ������*/
			/*������ ���������� {armor � ������} �� �����*/
public:		virtual map< string, string > *readFile();
			/*�������� ����������*/
public:		virtual cUnit* operator=(const cUnit &value);

};

