#ifndef CheckerKennedy_h
#define CheckerKennedy_h

#include "MoveChecker.h"


class CheckerKennedy : virtual public MoveChecker {

 public:

    virtual void CheckerKennedy();

    virtual void checkProposedMove(void  Polymer);
};

#endif // CheckerKennedy_h
