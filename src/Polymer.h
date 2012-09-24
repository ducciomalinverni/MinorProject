#ifndef Polymer_h
#define Polymer_h

#include <vector>

#include "Monomer.h"
#include "Vector3D.h"
#include "double.h"

class MCMCSimulator;

class Polymer {

 public:

    virtual void Polymer();

    virtual void Polymer(void  Nmonomers);

 public:
    Integer numberOfMonomers;
    Vector3D monomers;
    double bondLength;

 public:

    MCMCSimulator *myMCMCSimulator;

    /**
     * @element-type Monomer
     */
    std::vector< Monomer > myMonomer;
};

#endif // Polymer_h
