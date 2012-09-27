/* 
 
 Interface (abstract class) to the ConformationGenerator machine. The ConformationGenerator classes are responsible  for proposing a new polymer conformation, following different strategies: Pivot, modified pivot, ... 
 
 Implements:
    - Virtual void generateConformation(Polymer* polymerToMove, double angle) : applies a transformation to the polymer conformation polymerToMove
 
 
 Malinverni Duccio, 26 Sept. 2012 
 */
#ifndef ConformationGenerator_h
#define ConformationGenerator_h

#include "Polymer.h"

class ConformationGenerator {

 public:
    ConformationGenerator();
    virtual ~ConformationGenerator();
    virtual void generateConformation(Polymer* polymerToMove,double  angle)=0;

};

#endif // ConformationGenerator_h
