//
//  MonomerTest.cpp
//  
//
//  Created by Duccio Malinverni on 24.09.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "../Vector3D.h"
#include "../Monomer.h"
#define PI 3.14159265
using namespace std;

int main(int argv, char** argc){
    
    Vector3D a(2,3.2,4.1);
    Vector3D b(5.05,4,3.3);
    Monomer m1;
    Monomer m2(10,a);
    cout<<"Index of monomer 1 (default constructor, no parameters passed) : "<<m1.getIndex()<<endl;
    cout<<"Position of monomer 1 : "<<m1.getPosition()<<endl;
    cout<<"Index of monomer 2: "<<m2.getIndex()<<endl;
    cout<<"Position of monomr 2 : "<<m2.getPosition()<<endl;
    cout<<"Affecting a new position to the monomer"<<endl;
    m2.setPosition(b);
    cout<<"New position : "<<m2.getPosition()<<endl<<endl;
    cout<<"Test passed successfully"<<endl;
    return(EXIT_SUCCESS);
}