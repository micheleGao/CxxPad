// *************************************************************************
// ****************************** Read Only! *******************************
// **** Do not modify this file; except to uncomment the bonus question ****
// *************************************************************************

//============================================================================
// Rectangle header file. Rectangle publicly inherits from Shape
// Author      : Ayman Zeidan
//               CUNY, BMCC, CIS
//============================================================================

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include <string>

#include "Shape.h"

class Rectangle: public Shape {

  private:
    double width;
    double height;

  protected:

    // overrides the base class's toString implementation.
    // returns a string representation of the class. The method returns the value of id, name, width, height separated by an @:
    // <<value of id>>@<<value of name>>@<<value of width>>@<<value of height>>
    // note that you must reuse the base class's toString implementation. Don't repeat code from the base class
    string toString() const;

  public:
    //    // default constructor, initialize numerics to -1 and name to ""
    // Rectangle();

    // Non-default constructor to initialize the instance variables accordingly (base and child class)
    Rectangle(const double width, const double height, const long id, const string name);

    // The destructor simply prints the following message to the standard output stream
    // "Contestant instance destroyed: " << value of score here >>
    ~Rectangle();

    // The destructor simply prints the message from toString() to the standard output stream
    Rectangle(const Rectangle &other);

    // Overloads the assignment operator to copy values from another instance
    Rectangle& operator=(Rectangle &other);

    // double conversion operator to return the area (width X height)
    operator double();

    // returns the area (width X height)
    double area();

    // getter for field width
    double getWidth() const;

    // getter for field height
    double getHeight() const;

    // Overloads the standard input stream operator to read values for
    // width, height, id, name in this order
    // This operator MUST invoke the base class' operator>>
    friend istream& operator>>(istream &is, Rectangle *rectangle);

    // Overloads the standard output stream operator to print the message from toString() to the standard output stream
    friend ostream& operator<<(ostream &os, const Rectangle *rectangle);

    // bonus assignment. Uncomment the function header to overload the ofstream operator
   friend ofstream& operator<<(ofstream &ofs, const Rectangle *rectangle);
};

#endif /* RECTANGLE_H_ */
