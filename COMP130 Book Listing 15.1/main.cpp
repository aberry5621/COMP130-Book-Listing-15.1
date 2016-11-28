//
//  main.cpp
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include "GeometricObject.h"
using namespace std;

/*
Implement Geometric Objects
*/

// geometric object class constructor
GeometricObject::GeometricObject() {
    color = "white";
    filled = false;
}

// constructor with specified color / fill
GeometricObject::GeometricObject(const string& color, bool filled) {
    this->color = color;
    this->filled = filled;
}

// getter function returns color as a string
string GeometricObject::getColor() const {
    return color;
}

// setter function sets color
void GeometricObject::setColor(const string& color) {
    this->color = color;
}

// getter function returns state of filled yes / no
bool GeometricObject::isFilled() const {
    return filled;
}

// setter function sets filled to yes / no
void GeometricObject::setFilled(bool filled) {
    this->filled = filled;
}

// gets string version of object
string GeometricObject::toSrting() const {
    return "Geometric Object";
}

int main() {

    cout << "Gemoetric Objects!\n";
    

    
    return 0;
}
