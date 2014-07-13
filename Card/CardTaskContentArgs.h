


#ifndef _H_CARD_TASK_CONTENTARGS_H_
#define _H_CARD_TASK_CONTENTARGS_H_

#include "CardDef.h"
#include "CardContentArgs.h"

class CCardTaskContentArgs : public CCardContentArgs
{
public:
	CCardTaskContentArgs(int task)
		:CCardContentArgs()
		, m_Task(task)
	{}
	virtual ~CCardTaskContentArgs()
	{}

public:
	virtual ECardContentType Type() const
	{
		return ECardContentType_Task;
	}

	int GetTask() { return m_Task; }
protected:
private:
	int m_Task;
};


#endif