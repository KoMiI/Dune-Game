#pragma once
#include "cObject.h"
#include <map>
#include <string>
#include "../WIN32DUNEGAME/stdafx.h"

class cGun :
	public cObject
{
	//������������
			/*����������� ������� �� ���������*/
public:		cGun();
			/*����������� ����������� �������*/
public:		cGun(const cGun &value);
			/*����������� ������� � �����������*/
public:		cGun(const cObject &value, int distance_value, int damage_value);
	//�����������
public:		virtual ~cGun();

	//����
private:	int distance;
private:	int damage;
	//Set-Get ������ ������
			/*����� ������������ ��������� ���������*/
public:		virtual int getDistance() const;
			/*����� ����*/
public:		virtual int getDamage() const;
			/*������ ������������ �������� ���������*/
private:	void setDistance(const int value);
			/*������ ������������ ����*/
private:	void setDamage(const int value);

	// ������������� �� ���������� ������
			/*������ ���������� �� �����*/
public:		virtual map< string, string > *readFile();
protected:	virtual void setID();
			
public:		virtual string toString();

};

