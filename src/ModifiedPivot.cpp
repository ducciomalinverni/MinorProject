
#include "ModifiedPivot.h"
 
ModifiedPivot::ModifiedPivot():ConformationGenerator()
{}
ModifiedPivot::~ModifierPivot()
{}
void ModifiedPivot::generateConformation(Polymer* polymerToMove,double  angle)
{
    int nMonomers = polymerToMove->getNMonomers();
    
    //Select a monomer index as pivot point
    int selectedMonomer= rand() % nMonomers;
    
    //For all monomers after the pivot apply the harmonica and pivot
    for (int j=selectedMonomer;j<nMonomers;j++){
        //Apply the soufflet
    }

}