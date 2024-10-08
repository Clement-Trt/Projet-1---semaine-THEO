#ifndef IATTACKER_H
#define IATTACKER_H

#include "Alive.h"

class IAttacker
{
protected:

public:

	virtual void AttackAlive(Alive* _alive) = 0;

};


#endif // !IATTACKER_H

