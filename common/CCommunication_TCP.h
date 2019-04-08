#pragma once

#include "ICommunication.h"

class  CCommunication_TCP :
	public ICommunication
{
public:
	CCommunication_TCP();
	~CCommunication_TCP();
};

