#include "CardContent.h"
#include "CardContentArgs.h"

CCardContent::CCardContent(int id)
: m_Id(id)
, m_State(ECardState_Exec)
{
}

CCardContent::~CCardContent()
{
}

//---------------------------------------------------------

bool CCardContent::CanExec(const CCardContentArgs& args) const
{
	return true;
}
void CCardContent::Exec(const CCardContentArgs& args)
{

}

void CCardContent::CalcState()
{
	m_State = ECardState_Finish;
}
