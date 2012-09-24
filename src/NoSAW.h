#ifndef NoSAW_h
#define NoSAW_h

#include "MoveChecker.h"


class NoSAW : virtual public MoveChecker {

 public:

    virtual void NoSaw();

    virtual void checkProposedMove(void  Polymer);
};

#endif // NoSAW_h
