



#ifndef _H_CARD_TASK_CONTENT_H_
#define _H_CARD_TASK_CONTENT_H_

#include "CardContent.h"

class CCardTaskContent : public CCardContent
{
public:
	CCardTaskContent(int id, int task);
	virtual ~CCardTaskContent();

public:
	virtual bool CanExec(const CCardContentArgs& args) const;
	virtual void Exec(const CCardContentArgs& args);

private:
	int m_Task;
};



#endif