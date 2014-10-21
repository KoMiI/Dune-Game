#pragma once
#include "cUnit.h"
#include "cCell.h"
#include "cWorld.h"
#include "cTank.h"

class cTanker :
	public cUnit
{
	/*����*/
			 /*����� ��������� ������*/
private:	 cTank *tank;

			 /*����� ��������*/
public:		 cTank* getTank() const;
			 /*������ ��������*/
public:		 void setTank(cTank *value);

	/*����������� ������� �� ���������*/
public:		cTanker();
			/*����������� cUnit � ����������� <������� �����, �����>*/
public:		cTanker(const cUnit &value,cTank *in_tank);
			/*����������� �����������*/
public:		cTanker(const cTanker &value);

public:		virtual void Update(cCell *cell = 0, cWorld *world = 0);

public:		virtual~cTanker();
};
