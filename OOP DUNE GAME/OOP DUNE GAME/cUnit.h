#pragma once
#include "cObject.h"
#include "iClonable.h"
#include "iUpdateble.h"
#include "cController.h"

#include <string>
#include <map>

class cUnit :
	public cObject,
	public iClonable,
	public iUpdateble

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
public:		virtual cController* getController()const;
			/*������� ������ �� ����*/
public:		virtual cUnit& getLink();
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
			/*����� ���������� �������*/
public:		virtual void Update(cCell *cell_value, cWorld *world_value);

};

