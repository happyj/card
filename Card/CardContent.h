


#ifndef _H_CARD_CONTENT_H_
#define _H_CARD_CONTENT_H_

class CCardContentArgs;
enum ECardState;

class CCardContent
{
public:
	CCardContent(int id);
	virtual ~CCardContent();

public:
	int GetId(){ return m_Id; }
	ECardState GetState() { return m_State; }
	virtual void CalcState();

public:
	virtual bool CanExec(const CCardContentArgs& args) const;
	virtual void Exec(const CCardContentArgs& args);

private:
	int m_Id;
	ECardState m_State;
};



#endif