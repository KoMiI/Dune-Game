#pragma once
#include <string>
#include "cObject.h"
/*��������� ������������ ������*/
class iClonable
{
	/*����� ������������ ������ � ��� ������*/
public:		virtual cObject* clone() = 0;
};

