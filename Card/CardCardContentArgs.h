

#ifndef _H_CARD_CARD_CONTENT_ARGS_H_
#define _H_CARD_CARD_CONTENT_ARGS_H_


#include "CardContentArgs.h"

class CCardCardContentArgs : public CCardContentArgs
{
public:
	CCardCardContentArgs(int card)
		: CCardContentArgs()
		, m_Card(card)
	{}
	virtual ~CCardCardContentArgs()
	{}

public:
	virtual ECardContentType Type() const 
	{ 
		return ECardContentType_Card; 
	}
	int GetCard() const 
	{
		return m_Card;
	}
private:
	int m_Card;

};



#endif
