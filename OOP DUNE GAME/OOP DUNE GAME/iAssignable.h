#pragma once
#include "cObject.h"
/*��������� ������������ ������*/
class iAssignable
{
	/*����� ���������� ������*/
public:		virtual cObject* operator=(const cObject &value) = 0;
};