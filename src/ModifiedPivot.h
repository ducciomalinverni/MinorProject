/*
Modifier pivot algorithm: Generates a new polymer conformation based on a combination of of the pivot algorithm in the XY plane, and a random vertical displacement along z.

 Implements:
    generateConformation(Polymer* polymerToMove, double angle) : selects a pivot monomer, for all monomer after it, applies a random z translation and pivots of an angle angle around Oz.
 
 
Malinverni Duccio, 26.09.2012 
*/

#ifndef ModifiedPivot_h
#define ModifiedPivot_h

#include "ConformationGenerator.h"
#include <stdlib.h>

class ModifiedPivot :public ConformationGenerator {

    public:
        ModifiedPivot();
        ~ModifierPivot();
        void generateConformation(Polymer* polymerToMove,double  angle);
        
};

#endif // ModifiedPivot_h
