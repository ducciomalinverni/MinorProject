/*
Monomer class
Models a physical monomer belonging to a polymer chain

 Implements:
    - Vector3D getPosition() : returns the position of the monomer in space as a Vector3D
    - void setPosition(Vector3D) : affects a new space position to the monomer
    - int getIndex() : returns the index of the monomer in the polymer chain (i.e. the linear integer position along the chain)
 
Malinverni Duccio, 25 Sept. 2012
*/
#ifndef Monomer_h
#define Monomer_h

#include "Vector3D.h"
 
class Monomer {

 public:
    Monomer();
    Monomer(int  index, Vector3D  position);
    ~Monomer();
    Vector3D getPosition();
    void setPosition(Vector3D newPosition);
    int getIndex();
private:
    int indexInChain;
    Vector3D position;
};

#endif // Monomer_h
