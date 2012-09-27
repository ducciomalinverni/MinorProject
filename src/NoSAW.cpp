#include "NoSAW.h"

NoSAW::NoSAW():MoveChecker()
{}
NoSAW::NoSAW(double  _slabSpacing, double  _bondLength, double _bondDiameter):MoveChecker(_slabSpacing,_bondLength,_bondDiameter)
{}
NoSAW::~NoSAW()
{}
bool NoSAW::acceptProposedMove(Polymer* modifiedPolymer)
{   
    bool accept=true;
    int nMonomers=modifiedPolymer->getNMonomers();
    Vector3D monomerPosition(0,0,0);
    for (int i=0;i<nMonomers;i++){
        monomerPosition = (*modifiedPolymer)[i]->getPosition();
        if(monomerPosition[2]<0 || monomerPosition[2]>slabSpacing){
            accept=false;
            break;
        }
    }
    return accept;
}