#include "Monomer.h"

Monomer::Monomer():indexInChain(0),position(Vector3D(0,0,0))
{
}
Monomer::Monomer(int  index, Vector3D  _position):indexInChain(index),position(_position)
{}
Monomer::~Monomer(){}
Vector3D Monomer::getPosition()
{
    return position;
}
void Monomer::setPosition(Vector3D newPosition)
{
    position = newPosition;
}
int Monomer::getIndex()
{
    return indexInChain;
}