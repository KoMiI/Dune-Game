#pragma once
#include "cUnit.h"
#include "cGun.h"

class cGunner :
	public cUnit
{
	/*����*/
			 /*���� � �������*/
private:	 cGun* gun;
		/*Set-Get ������*/
			 /*����� ������*/
public:		 cGun* getGun() const;
			 /*������ ������*/
public:		 void setGun(cGun *value);
			 /*����� ������ �� ������*/
public:		 cGun& getGunLink();

	//������������
			/*����������� ������� �� ���������*/
public:		cGunner();
			/*����������� cUnit � ����������� <������� �����, �����>*/
public:		cGunner(const cGunner &value, const cGun &in_gun);
			/*����������� �����������*/
public:		cGunner(const cGunner &value);

public:		~cGunner();
};

