#ifndef Monomer_h
#define Monomer_h

#include "Vector3D.h"

class Polymer;

class Monomer {

 public:

    virtual Vector3D getPosition();

    virtual Vector3D setPosition();

    virtual Integer getIndex();

    virtual void Monomer();

    virtual void Monomer(void  index, void  position);

 public:
    Integer indexInChain;

 private:
    Vector3D Position;

 public:

    Polymer *myPolymer;

    /**
     * @element-type Vector3D
     */
    Vector3D myVector3D;
};

#endif // Monomer_h
