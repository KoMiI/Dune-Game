#pragma once
#include "cObject.h"
/*��������� ������������ ������*/
class iUpdateble
{
/*����� ���������� ������*/
public:		virtual void Update(cObject *cell, cObject *world) = 0;
};