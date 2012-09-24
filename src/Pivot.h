#ifndef Pivot_h
#define Pivot_h

#include "MonomerMover.h"


class Pivot : virtual public MonomerMover {

 public:

    virtual void Pivot();

    virtual void move(void  angle, void  monomer);
};

#endif // Pivot_h
