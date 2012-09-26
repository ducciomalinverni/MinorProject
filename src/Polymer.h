/*
 
Polymer class
Models a physical polymer as a collection of monomers. Between each monomer, the bond is modelled as a cylinder of length bondLength and diameter bondDiameter. 
 
Implements:
    - int getNMonomers() : returns the number of monomers belonging to the chain
    - double getBondLength() : returns the length of a bond linking two consecutives monomers
    - double getBondDiameter() : returns the diamater of the bond linking two consecutives monomers
    - void setupInitialConformation() : initializes the conformation of the polymer 
    - Monomer* operator[](int index) : returns the i-th (index) monomer along the chain

Malinverni Duccio, 26 Sept. 2012
*/ 
#ifndef Polymer_h
#define Polymer_h

#include "Monomer.h"
#include <vector>
class Polymer {

    public:
        Polymer();
        Polymer(int Nmonomers, double bondL, double bondD);
        ~Polymer();
        int getNMonomers();
        double getBondLength();
        double getBondDiameter();
        void setupInitialConformation(double slabThickness);
        Monomer* operator[] (int index);

    private:
        int nMonomers;
        double bondLength;
        double bondDiamaeter;
        std::vector<Monomer*> monomers;
};

#endif // Polymer_h
