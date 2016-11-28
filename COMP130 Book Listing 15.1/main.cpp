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
    
    // create an var of object data type
    GeometricObject shape;
    shape.setColor("red");
    shape.setFilled(true);
    // say what it is
    cout << shape.toString() << endl
        << " color: " << shape.getColor()
        << " filled: " << (shape.isFilled() ? "true" : "false") << endl;
    
    // create var circle of Circle data type
    Circle circle(5);
    circle.setColor("black");
    circle.setFilled(false);
    // say what it is
    cout << shape.toString() << endl
    << " color: " << circle.getColor()
    << " filled: " << (circle.isFilled() ? "true" : "false")
    << " radius: " << circle.getRadius()
    << " area: " << circle.getArea()
    << " perimeter: " << circle.getPerimeter() << endl;
    
    
    return 0;
}
