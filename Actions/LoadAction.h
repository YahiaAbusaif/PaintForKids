#ifndef Load_ACTION
#define Load_ACTION

#include "Action.h"

class LoadAction : public Action
{
	string filename;
	ifstream File;
	bool isOpen;

public:

	LoadAction(ApplicationManager* pApp);

	virtual void ReadActionParameters();
	virtual void Execute();

	////To undo this action (code depends on action type)
	//virtual void Undo();

	////To redo this action (code depends on action type)
	//virtual void Redo();

	//virtual bool CanUndo() const;
};

#endif