//
//  VectorTest.cpp
//  
//
//  Created by Duccio Malinverni on 24.09.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "../Vector3D.h"
#define PI 3.14159265
using namespace std;

int main(int argv, char** argc){
    
    Vector3D a(2,3,4);
    Vector3D b(1,1,1);
    Vector3D c;
    Vector3D d(1,0,0);
    Vector3D e(1,0,1);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;
    c= a+b;
    cout<<"a + b =" <<c<<endl;
    c= a-b;
    cout<<"a - b =" <<c<<endl;
    double dot= a*b;
    cout<<"a * b =" <<dot<<endl;
    cout<<"Norm squared of a = " <<a.normSquared()<<endl;
    cout<<"The 2nd componend of a is " <<a[1]<<endl;
    d.rotateZaxis(PI);
    cout<<"Rotate d of 180° around z: " << d<<endl;
    d = Vector3D(1,0,0);
    d.rotateZaxis(0.454645);
    cout<<"Rotate d of 0.454645 rad around z :" << d<<endl;
    d=Vector3D(1,0,0);
    d.rotateAroundAxis(Vector3D(0,0,1),PI/2);
    cout<<"Rotate d of 90° around z: " << d<<endl;
    d=Vector3D(1,0,0);
    d.rotateAroundAxis(Vector3D(0,1,0),PI/2);
    cout<<"Rotate d of 90° around y: " << d<<endl;
    Vector3D dir(1,0,1);
    dir=dir.normalized();
    e.rotateAroundAxis(dir,PI);
    cout<<"Rotate e of 180° around (1,0,1): " << e<<endl<<endl;
    cout<<"Compared with mathlab results: OK!"<<endl;
    return(EXIT_SUCCESS);
}