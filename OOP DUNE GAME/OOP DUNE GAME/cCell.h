#pragma once
#include "cObject.h"
#include "cUnit.h"
#include "cTank.h"
#include "iUpdateble.h"
#include <vector>

class cCell :
	public cObject,
	public iUpdateble
{
		/*����*/
			//��� ��������� � ������
private:	vector<cObject*> deck;
			//���� � ������
private:	cUnit* unit; //??
			//��������� ����
private:	cTank* spice;
private:	bool isRock;

		/*Set-Get ������*/
			//������ ��� ��������
protected:	virtual void setDeck(vector<cObject*> value);
			//����� ��� ��������
public:		vector<cObject*> getDeck()const;
			//����� ������ �� ��� ��������
public:		virtual vector<cObject*>& getDeckLink();
			//����� �������� �����
public:		cUnit* getUnit()const;
			//���������� (���� ��� �����) �������� �����
public:		bool putUnit(cUnit *unit);
			//������ �����
public:		void setUnit(cUnit *unit);
			//������� �����
public:		cUnit* pickUnit();
			//����� ������� ��������� ������
public:		cTank* getSpice()const;
			//������ ������� ��������� ������
public:		void setSpice(cTank* value) const;

public:		void generate(int rockChance, int rockRand, int spiceConut);

			//��������� ��������� ����
public:		virtual map< string, string > *readFile();
			//������� � ������
public:		virtual string toString();
			//����� ���������� ������
public:		virtual void Update();

			//�����������
public:		cCell();
public:		cCell(const cCell &value);
public:		cCell(const cCell &value, vector<cObject*> in_deck, cUnit *in_unit);
public:		virtual ~cCell();
};

