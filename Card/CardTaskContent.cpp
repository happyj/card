#include "CardTaskContent.h"
#include "CardDef.h"
#include "CardTaskContentArgs.h"


CCardTaskContent::CCardTaskContent(int id, int task)
: CCardContent(id)
, m_Task(task)
{

}


CCardTaskContent::~CCardTaskContent()
{

}

bool CCardTaskContent::CanExec(const CCardContentArgs& args) const
{
	if (args.Type() == ECardContentType_Task)
		return true;
	return false;
}

void CCardTaskContent::Exec(const CCardContentArgs& args)
{
	CCardTaskContentArgs& e = (CCardTaskContentArgs&)args;
	if (e.GetTask() == m_Task)
		CalcState();
}
