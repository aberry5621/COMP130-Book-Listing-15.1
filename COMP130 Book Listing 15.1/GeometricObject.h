//
//  GeometricObject.h
//  COMP130 Book Listing 15.1
//
//  Created by ax on 11/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#ifndef GeometricObject_h
#define GeometricObject_h

#include <string>
using namespace std;

/*
define class for geometric objects:
color
fill
*/

class GeometricObject {
public:
    GeometricObject(); // geometric object class constructor
    GeometricObject(const string& color, bool filled); // constructor with specified color / fill
    string getColor() const; // getter function returns color as a string
    void setColor(const string& color); // setter function sets color
    bool isFilled() const; // getter function returns state of filled yes / no
    void setFilled(bool filled); // setter function sets filled to yes / no
    string toString() const; // gets string version of object
private:
    string color; 
    bool filled;
};

#endif /* GeometricObject_h */
