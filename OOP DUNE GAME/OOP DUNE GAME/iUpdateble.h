#pragma once
#include "cObject.h"
/*��������� ������������ ������*/
class iUpdateble
{
/*����� ���������� ������*/
public:		virtual void Update(cObject *base, cObject *world) = 0;
};