#pragma once
#include "cCell.h"
#include "cWorld.h"

/*��������� ������������ ������*/
class iUpdateble
{
/*����� ���������� ������*/
public:		virtual void Update(cCell *cell_value, cWorld *world_value) = 0;
};