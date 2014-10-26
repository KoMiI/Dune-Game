#pragma once
#include "cObject.h"
#include "iClonable.h"
#include "iUpdateble.h"

class cUnit :
	public cObject,
	public iClonable,
	public iUpdateble

{
	//����
private:	bool isFlying;
private:	int armor;
private:	int cost;

	//������������
			/*����������� ������� �� ���������*/
public:		cUnit();
			/*����������� cUnit � ����������� <������� �����, �����>*/
public:		cUnit(const cObject &value, int armor_value);
			/*����������� �����������*/
public:		cUnit(const cUnit &value);
	//����������
public:		virtual ~cUnit();

	//Set-Get ������ ������
			/*���������� ��������� �� ������ � �������*/
public:		bool getFlying() const;
			/*����� ������� �������� �����*/
public:		int	getArmor() const;

public:		int getCost();
public:		virtual void setCost(int value);

			/*������ ��������� �������� � ������� ��� �� �����*/
public:		virtual void setFlying(bool value);
			/*������ ���������� �������� �����*/
public:		void setArmor(int value);

	//  ������������ ������
			//���������� � ������
public:		virtual string toString();
			//������������
public:		virtual cObject* clone();
	// ������������� �� ���������� ������
			/*������ ���������� {armor � ������} �� �����*/
public:		virtual map< string, string > *readFile();

public:		virtual void Update(cObject *cell, cObject *world);
};

