//
//  DerivedCircle.cpp
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include "DerivedCircle.h"

// construct default object
Circle::Circle() {
    radius = 1;
}

// construct circle object with specified radius
Circle::Circle(double radius) {
    setRadius(radius);
}

// construct circle object with specified radius, color, fill
Circle::Circle(double radius, const string& color, bool filled) {
    setRadius(radius);
    setColor(color);
    setFilled(filled);
}

// getter: return the radius of the circle
double Circle::getRadius() const {
    return radius;
}

// setter: set radius of circle
void Circle::setRadius(double radius) {
    this->radius = (radius >= 0) ? radius : 0;
}

// return area of this circle
double Circle::getArea() const {
    return radius * radius * 3.14159;
}

// return perimeter of this circle
double Circle::getPerimeter() const {
    return 2 * radius * 3.14159;
}

// return the diameter of this circle
double Circle::getDiameter() const {
    return 2 * radius;
}

// redefine the toString string representation of the funciton
string Circle::toString() const {
    return "Circle object";
}