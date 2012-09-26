/* 
 
Interface (abstract class) to the MoveChecker machine. The MoveChecker classes are responsible for testing if a proposed conformation is compatible with the constraints : SAW and slab-confined

Implements:
    - Virtual =0 acceptProposedMove: All classes that implement a movecheker must implement a bool acceptProposedMove() method, which checks if the polymer transmitted as argument is compatible with the constraints.
 

Malinverni Duccio, 26 Sept. 2012 
*/

#ifndef MoveChecker_h
#define MoveChecker_h

#include "Polymer.h"
class MoveChecker {

    public:
        MoveChecker();
        virtual ~MoveChecker();
        MoveChecker(double  _slabSpacing, double  _bondLength, double _bondDiameter);
        virtual bool acceptProposedMove(Polymer* modifiedPolymer) =0;
        
    protected:
        double slabSpacing;
        double bondLength;
        double bondDiameter;
};

#endif // MoveChecker_h
