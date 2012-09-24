#include "Vector3D.h"



Vector3D::Vector3D(void)
{
    components[0]=0;
    components[1]=0;
    components[2]=0;
}
Vector3D::Vector3D(double  x, double  y, double  z)
{
    components[0]=x;
    components[1]=y;
    components[2]=z;
}
Vector3D operator+(Vector3D const& vec1, Vector3D const& vec2)
{
    return Vector3D(vec1.components[0] + vec2.components[0],vec1.components[1] + vec2.components[1],vec1.components[2] + vec2.components[2]); 
}

Vector3D operator-(Vector3D const& vec1, Vector3D const& vec2)
{
    return Vector3D(vec1.components[0] - vec2.components[0],vec1.components[1] - vec2.components[1],vec1.components[2] - vec2.components[2]);
}
double operator*(Vector3D const& vec1, Vector3D const& vec2)
{
    return vec1.components[0]*vec2.components[0]+vec1.components[1]*vec2.components[1]+vec1.components[2]*vec2.components[2];
}

void Vector3D::rotateZaxis(double  alpha)
{   
    double comp2Temp=components[0];
    components[0]=components[0]*cos(alpha) - components[1]*sin(alpha);
    components[1]=comp2Temp*sin(alpha) + components[1]*cos(alpha);
    
}
void Vector3D::rotateAroundAxis(Vector3D  axis, double  alpha)
{
    double ux= axis.components[0];
    double uy= axis.components[1];
    double uz= axis.components[2];
    double vx=components[0];
    double vy=components[1];
    double vz=components[2];
    double cosAlpha=cos(alpha);
    double sinAlpha=sin(alpha);
    
    components[0]=  vx*(cosAlpha+ux*ux*(1-cosAlpha)) + vy*(ux*uy*(1-cosAlpha) - uz*sinAlpha) + vz*(ux*uz*(1-cosAlpha) + uy*sinAlpha);
    components[1] = vx*(uy*ux*(1-cosAlpha) + uz*sinAlpha) + vy*(cosAlpha + uy*uy*(1-cosAlpha)) + vz*(uy*uz*(1-cosAlpha) - ux*sinAlpha);
    components[2] = vx*(uz*ux*(1-cosAlpha) - uy*sinAlpha) + vy*(uz*uy*(1-cosAlpha) + ux*sinAlpha) + vz*(cosAlpha + uz*uz*(1-cosAlpha)); 
                           
}
double Vector3D::normSquared()
{
    return (*this)*(*this);
}
Vector3D Vector3D::normalized()
{
    double norm=sqrt(this->normSquared());
    return Vector3D(components[0]/norm,components[1]/norm,components[2]/norm);
}
std::ostream& operator<<(std::ostream& flux,Vector3D const& vec){
    flux<<"("<<vec.components[0]<<" , "<<vec.components[1]<<" , "<<vec.components[2]<<")";
    return flux;
}
double Vector3D::operator[] (int index)
{
    return components[index];
}