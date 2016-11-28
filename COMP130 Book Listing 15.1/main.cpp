//
//  main.cpp
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "GeometricObject.h"
#include "DerivedCircle.h"
#include "DerivedRectangle.h"

#include <iostream>
using namespace std;

int main() {

    cout << "Gemoetric Objects!\n";
    
    // create an var of object type
    GeometricObject shape;
    shape.setColor("red");
    shape.setFilled(true);
    // say what it is
    cout << shape.toString() << endl
        << " color: " << shape.getColor()
        << " filled: " << (shape.isFilled() ? "true" : "false") << endl;
    
    
    
    return 0;
}
