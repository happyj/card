#include "CardCardContent.h"
#include "CardDef.h"
#include "CardCardContentArgs.h"


CCardCardContent::CCardCardContent(int id, int card)
: CCardContent(id)
, m_Card(card)
{

}

CCardCardContent::~CCardCardContent()
{

}

bool CCardCardContent::CanExec(const CCardContentArgs& args) const
{
	if (args.Type() == ECardContentType_Card)
		return true;
	return false;
}

void CCardCardContent::Exec(const CCardContentArgs& args)
{
	CCardCardContentArgs& e = (CCardCardContentArgs&)args;
	if (e.GetCard() == m_Card)
		CalcState();
}