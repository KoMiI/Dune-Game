#pragma once
#include "cObject.h"

class cController :
	public cObject
{
public:
	cController();
	virtual ~cController();
protected:	virtual void setID();
};

