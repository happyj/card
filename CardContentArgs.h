


#ifndef _H_CARD_CONTENTARGS_H_
#define _H_CARD_CONTENTARGS_H_

#include "CardDef.h"

class CCardContentArgs
{
public:
	virtual ECardContentType Type() const
	{
		return ECardContentType_None;
	}

protected:
private:
};


#endif