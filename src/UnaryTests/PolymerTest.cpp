//
//  MonomerTest.cpp
//  
//
//  Created by Duccio Malinverni on 24.09.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "../Polymer.h"
#define PI 3.14159265
using namespace std;

int main(int argv, char** argc){
    
    Polymer p1;
    Polymer p2(10,200,20);
    p2.setupInitialConformation(100);
    cout<<p2.getBondDiameter()<<endl;
    cout<<p2.getBondLength()<<endl;
    cout<<p1.getBondDiameter()<<endl;
    cout<<p1.getBondLength()<<endl;
    for (int i=0;i<10;i++){
        cout<< p2[i]->getPosition()<<endl;
    }
    for (int i=0;i<10;i++){
        p2[i]->setPosition(Vector3D(1,1,1));
    }
    for (int i=0;i<10;i++){
        cout<< p2[i]->getPosition()<<endl;
    }
    return(EXIT_SUCCESS);
}