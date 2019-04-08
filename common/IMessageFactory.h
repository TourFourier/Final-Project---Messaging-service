#pragma once


class  IMessageFactory
{
public:
	IMessageFactory();
	virtual ~IMessageFactory();

	virtual IMessage* CreateMessage(EMessageType type) = 0;
};

