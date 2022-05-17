/*
 * Rectangle.cpp
 */

#include "Rectangle.h"

#include <iostream>
#include <string>
// overrides the base class's toString implementation.
// returns a string representation of the class. The method returns the value of id, name, width, height separated by an @:
// <<value of id>>@<<value of name>>@<<value of width>>@<<value of height>>
// note that you must reuse the base class's toString implementation. Don't repeat code from the base class
string Rectangle::toString() const
{
    string wide = to_string(this->width);
    string height = to_string(this->height);
    string thisString = Shape::toString() + "@" + wide + "@" + height;
    return thisString;
}

// default constructor, initialize numerics to -1 and name to ""
// Rectangle::Rectangle()
// {
//     this->width = -1;
//     this->height = -1;
//     this->name = "";
// }
// Non-default constructor to initialize the instance variables accordingly (base and child class)
Rectangle::Rectangle(const double width, const double height, const long id, const string name):Shape(id, name)
{
    this->width = width;
    this->height = height;
//     this->id = id;
//     this->name = name;
// }
}

// The destructor simply prints the following message to the standard output stream
// "Contestant instance destroyed: " << value of score here >>
Rectangle::~Rectangle()
{
    cout << "Contestant instance destroyed:" << toString() << endl;
}

// The destructor simply prints the message from toString() to the standard output stream
Rectangle::Rectangle(const Rectangle &other):Rectangle(other.width, other.height, other.id, other.name)
{
    this->width = other.width;
    this->height = other.height;
    this->id = other.id;
    this->name = other.name;
}

// Overloads the assignment operator to copy values from another instance
Rectangle &Rectangle::operator=(Rectangle &other)
{

    // cout << width << height << id << name;
    if (this != &other)
    {
        ((Shape *)this)->operator=(other);

        width = other.width;
        height = other.height;
        // id = other.id;
        // name = other.name;
    }
    return *this;
    
}

// double conversion operator to return the area (width X height)
Rectangle::operator double()
{
    return this->width * this->height;
}

// returns the area (width X height)
double Rectangle::area()
{
    return this->width * this->height;
}

// getter for field width
double Rectangle::getWidth() const
{
    return this->width;
}

// getter for field height
double Rectangle::getHeight() const
{
    return this->height;
}

// Overloads the standard input stream operator to read values for
// width, height, id, name in this order
// This operator MUST invoke the base class' operator>>
istream &operator>>(istream &is, Rectangle *rectangle)
{
    is >> rectangle->width >> rectangle->height;
    //rectangle->id >> rectangle->name;
    return is;
} 

// Overloads the standard output stream operator to print the message from toString() to the standard output stream
ostream &operator<<(ostream &os, const Rectangle *rectangle)
{

    os  << rectangle->toString() << endl;

    return os;
}
ofstream& operator<<(ofstream &ofs, const Rectangle *rectangle)
{
    
    ofs << ((Shape *)rectangle)->getId() << ((Shape *)rectangle)->getName() << ((Rectangle *)rectangle)-> getWidth() << ((Rectangle *)rectangle)->getHeight() << endl;
    return ofs;
}