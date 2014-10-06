#pragma once
#include "cObject.h"

class cTank :
	public cObject
{
	//����
private:	int filling;
private:	int size;

	//������������
			/*����������� ������� �� ���������*/
public:		cTank();
			/*����������� ����������� �������*/
public:		cTank(const cTank& value);
			/*����������� � ����������� <cObject, ������� �������������, ������� ������>*/
public:		cTank(const cObject *value, int in_filling, int in_size);
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
public:		friend cTank* operator+(const cTank& left, const cTank& right);
			/*�������� ����������*/
public:		virtual cTank* operator=(const cTank &value);

	//������������� ������ �� ����������
			/*������ ���������� �������� � �����*/
public:		virtual map< string, string > *readFile();
			/*����� ���������� ������ � ������*/
public:		virtual string toString();

};

