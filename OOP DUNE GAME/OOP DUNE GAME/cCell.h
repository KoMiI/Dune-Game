#pragma once
#include "cObject.h"
#include "cUnit.h"
#include "cTank.h"
#include <vector>

class cCell :
	public cObject
{
		/*����*/
			//��� ��������� � ������
private:	vector<cObject*> deck;
			//���� � ������
private:	cUnit* unit;
			//��������� ����
private:	cTank* spice;

		/*Set-Get ������*/
			//����� ������� �� ���� ��������
public:		cObject* getDeckElement(const int value) const;
			//����� ������ ���� ��������
public:		int getSize() const;
			//������ ������� ����
public:		virtual void setDeckElement(cObject *value, int index);
			//������ ���
protected:	virtual void setDeck(vector<cObject*> value);
			//����� ��� ��������
public:		vector<cObject*> getDeck()const;

			//����� �������� �����
public:		cUnit* getUnit()const;
			//������ �������� �����
public:		bool setUnit(const cUnit *unit) const;
public:		cUnit* pickUnit();
			//����� ������� ��������� ������
public:		cTank* getSpice()const;
			//������ ������� ��������� ������
public:		void setSpice(cTank* value) const;

			//��������� ��������� ����
public:		virtual map< string, string > *readFile();
			//������� � ������
public:		virtual string toString();

			//�����������
public:		cCell();
public:		cCell(const cCell &value);
public:		cCell(const cCell &value, vector<cObject*> in_deck, cUnit *in_unit);
public:		virtual ~cCell();
};

