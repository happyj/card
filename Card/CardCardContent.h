



#ifndef _H_CARD_CARD_CONTENT_H_
#define _H_CARD_CARD_CONTENT_H_

#include "CardContent.h"

class CCardCardContent : public CCardContent
{
public:
	CCardCardContent(int id, int card);
	virtual ~CCardCardContent();

public:
	virtual bool CanExec(const CCardContentArgs& args) const;
	virtual void Exec(const CCardContentArgs& args);

private:
	int m_Card;
};



#endif