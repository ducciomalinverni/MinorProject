#ifndef MCMCSimulator_h
#define MCMCSimulator_h

#include "*MonomerMover.h"
#include "*MoveChecker.h"
#include "*Polymer.h"
#include "MonomerMover.h"
#include "MoveChecker.h"
#include "Polymer.h"


class MCMCSimulator {

 public:

    virtual void MCMCSimulator();

    virtual void MCMCSimulator(void  InputParameters);

    virtual void run();

 public:
    *Polymer currentConformation;
    *Polymer proposedConformation;
    *Polymer lastSavedConformation;
    *MoveChecker moveAcceptor;
    *MonomerMover mover;
    Integer NumberOfStepsToDecorrelate;

 private:
    Integer NumberOfConformationsWanted;

 public:

    MoveChecker &myMoveChecker;

    MonomerMover &myMonomerMover;

    /**
     * @element-type Polymer
     */
    Polymer myPolymer[ 3];
};

#endif // MCMCSimulator_h
