/* 
 
Conformation checker for the case with no self avoidance.
This class implements the acceptProposedMove() inherited from the abstract MoveChecker class.

Implements:
    - acceptProposedMove(Polymer* modifiedPolymer) : return a boolean, stating if the proposed conformation in modifiedPolymer is compatible with the slab-like confinement.
 
Malinverni Duccio, 26 Sept. 2012
*/

#ifndef NoSAW_h
#define NoSAW_h

#include "MoveChecker.h"

class NoSAW :public MoveChecker {

    public:
        NoSAW();
        NoSAW(double  _slabSpacing, double  _bondLength, double _bondDiameter);
        ~NoSAW();
        bool acceptProposedMove(Polymer* modifiedPolymer);     
};

#endif // NoSAW_h
