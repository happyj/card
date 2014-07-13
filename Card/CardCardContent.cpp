#include "CardCardContent.h"
#include "CardDef.h"
#include "CardContentArgs.h"

bool CCardCardContent::CanExec(const CCardContentArgs& args) const
{
	if (args.Type() == ECardContentType_Card)
		return true;
	return false;
}

void CCardCardContent::Exec(const CCardContentArgs& args)
{

}