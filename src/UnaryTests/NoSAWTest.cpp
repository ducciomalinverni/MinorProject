//
//  NoSawTest.cpp
//  
//
//  Created by Duccio Malinverni on 26.09.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "../NoSAW.h"
#include <iostream>
int main(int argv, char** argc){
    double const slabeThickness=180.0;
    Polymer p1(10,200,20);
    p1.setupInitialConformation(slabeThickness);
    NoSAW ns(slabeThickness,200,20);
    for (int i=0;i<10;i++){
        std::cout<< p1[i]->getPosition()<<std::endl;
    }
    bool a = ns.acceptProposedMove(&p1);
    std::cout<<"Accepted?"<<std::endl;
    std::cout<<a<<std::endl;
    return(EXIT_SUCCESS);
}