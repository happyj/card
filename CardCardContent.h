



#ifndef _H_CARD_CARD_CONTENT_H_
#define _H_CARD_CARD_CONTENT_H_

#include "CardContent.h"

class CCardCardContent : public CCardContent
{
public:
	virtual bool CanExec(const CCardContentArgs& args) const;
	virtual void Exec(const CCardContentArgs& args);
};



#endif