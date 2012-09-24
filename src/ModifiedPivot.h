#ifndef ModifiedPivot_h
#define ModifiedPivot_h

#include "MonomerMover.h"


class ModifiedPivot : virtual public MonomerMover {

 public:

    virtual void ModifiedPivot();

    virtual void move(void  angle, void  monomer);
};

#endif // ModifiedPivot_h
