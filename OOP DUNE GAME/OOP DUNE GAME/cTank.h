#pragma once
#include "cObject.h"
class cTank :
	public cObject
{
	//����
private:	int filling;
private:	int size;

	//������������
			/*����������� �� ��������� <��� ����������>*/
public:		cTank();
			/*����������� ����������� <cTank>*/
public:		cTank(const cTank& value);
			/*����������� � ����������� <cObject, ������� �������������, ������� ������>*/
public:		cTank(cObject *value, int in_filling, int in_size);
	//����������
public:		virtual ~cTank();

	//Set-Get ������ ������
			/*������ ������� �������������*/
public:		virtual void setFilling(int value);
			/*����� ������� �������������*/
public:		int getFilling() const;

			/*������ ������������ ������*/
public:		virtual void setSize(int value);
			/*����� ������������ ������*/
public:		int getSize() const;

	//���������� ����������
			/*���������� ��������� ��������, ���� ������������� 1) ���� ���� ����� � ����*/
public:		cTank* operator+(const cTank &value);
	//������������� ������ �� ����������
			/*������ ���������� �������� � �����*/
public:		virtual map< string, string > *readFile();

};

