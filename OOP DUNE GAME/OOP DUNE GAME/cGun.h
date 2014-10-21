#pragma once
#include "cObject.h"
#include <map>
#include <string>

class cGun :
	public cObject
{
	//������������
			/*����������� ������� �� ���������*/
public:		cGun();
			/*����������� ����������� �������*/
public:		cGun(const cGun &value);
public:		cGun(cObject *value, int distance_value, int damage_value);
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
			/*������ ���������� {armor � ������} �� �����*/
public:		virtual map< string, string > *readFile();


};

