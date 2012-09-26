/* 
 
 Basic 3D vector class
 
 Implements the following operations:
    - void rotateZaxis(double alpha) : rotates the current vector aroung the z-axis of an angle alpha (in radians), in positive direction
    - void rotateAroundAxis(Vector3D axis, double alpha) : rotates the current vector around an axis defined by the unit vector axis of an angle alpha (in radians), in positive direction
    - double normSquared() : returns the norm squared of the current vector
    - Vector3D normalized() : return a normalized copy of the current vector
    - Vector3D operator+() : usual vectorial addition operator
    - Vector3D operator-() : usual vectorial soustraction operator
    - double operator*() : dot product between two vectors
    - ostream operator << : prints the 3 components of the current vector
    - double operator[int i] : returns the i-th component of the vector
 
Malinverni Duccio, 26 Sept. 2012
 */

#ifndef Vector3D_h
#define Vector3D_h

#include <math.h>
#include <iostream>
class Vector3D {
    public:
        Vector3D();
        Vector3D(double  x, double  y, double z);
        ~Vector3D();
        void rotateZaxis(double  alpha);
        void rotateAroundAxis(Vector3D  axis, double  alpha);
        double normSquared();
        Vector3D normalized();
        
        //Overloaded operators
        friend Vector3D operator+ (Vector3D const& vec1, Vector3D const& vec1);
        friend Vector3D operator- (Vector3D const& vec1, Vector3D const& vec1);
        friend double operator* (Vector3D const& vec1, Vector3D const& vec1);
        friend std::ostream& operator<<(std::ostream& flux,Vector3D const& comp);
        double operator[] (int index);
    
    private:
        double components[3];
};

#endif // Vector3D_h
