#pragma once
#include "cUnit.h"
#include "cTank.h"

class cSpiceCollector :
	public cUnit
{
	/*����*/
			 /*����� ��������� ������*/
private:	 cTank *tank;

			 /*����� ��������*/
public:		 cTank* getTank() const;
			 /*������ ��������*/
public:		 void setTank(cTank *value);
			 /*����� ������ �� ��������*/
public:		 cTank& getTankLink();

	/*����������� ������� �� ���������*/
public:		cSpiceCollector();
			/*����������� cUnit � ����������� <������� �����, �����>*/
public:		cSpiceCollector(const cUnit &value, const cTank &in_tank);
			/*����������� �����������*/
public:		cSpiceCollector(const cSpiceCollector &value);

	
	~cSpiceCollector();
};

