#include "Polymer.h"

Polymer::Polymer():nMonomers(1),bondLength(1),bondDiamaeter(1)
{
    monomers.push_back(new Monomer(0,Vector3D(0,0,0)));
}
Polymer::Polymer(int Nmonomers, double bondL, double bondD):nMonomers(Nmonomers),bondLength(bondL),bondDiamaeter(bondD)
{
    monomers.reserve(nMonomers);
    for (int j=0;j<nMonomers;j++){
        monomers.push_back(new Monomer(j,Vector3D(0,0,0)));
    }
}
Polymer::~Polymer()
{
    for (int j=0;j<nMonomers;j++){
        delete monomers[j];
    }   
}
int Polymer::getNMonomers()
{
    return nMonomers;
}
double Polymer::getBondLength()
{
    return bondLength;
}
double Polymer::getBondDiameter()
{
    return bondDiamaeter;
}
Monomer* Polymer::operator[] (int index)
{
    return monomers[index];
}
void Polymer::setupInitialConformation(double slabThickness)
{
    for(int i=0;i<nMonomers;i++){
        monomers[i]->setPosition(Vector3D(i*bondLength,0,slabThickness/2.0));
    }
}