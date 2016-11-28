//
//  DerivedCircle.h
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef DerivedCircle_h
#define DerivedCircle_h

// include parent / base / superclass - right?
#include "GeometricObject.h"

class Circle: public GeometricObject {
public:
    Circle();
    Circle(double);
    Circle(double radius, const string& color, bool filled);
    double getRadius() const;
    void setRadius(double);
    double getArea() const;
    double getPerimeter() const;
    double getDiameter() const;
    string toString() const;
private:
    double radius;
};


#endif /* DerivedCircle_h */
