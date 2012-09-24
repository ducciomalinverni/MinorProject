/* Comment and describe basic features */

#ifndef Vector3D_h
#define Vector3D_h

#include <math.h>
#include <iostream>
class Vector3D {
    
    private:
        double components[3];
    public:
        Vector3D();
        Vector3D(double  x, double  y, double z);
        void rotateZaxis(double  alpha);
        void rotateAroundAxis(Vector3D  axis, double  alpha);
        double normSquared();
        Vector3D normalized();
        friend Vector3D operator+ (Vector3D const& vec1, Vector3D const& vec1);
        friend Vector3D operator- (Vector3D const& vec1, Vector3D const& vec1);
        friend double operator* (Vector3D const& vec1, Vector3D const& vec1);
        friend std::ostream& operator<<(std::ostream& flux,Vector3D const& comp);
        double operator[] (int index);
};

#endif // Vector3D_h
