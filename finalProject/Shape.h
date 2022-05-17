// *************************************************************************
// ****************************** Read Only! *******************************
// **** Do not modify this file; except to uncomment the bonus question ****
// *************************************************************************

//============================================================================
// Shape header file. Shape is an abstract class for different Shapes
// Author      : Ayman Zeidan
//               CUNY, BMCC, CIS
//============================================================================

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * An abstract class to encapsulate a shape's data and operations.
 * Shape instances can only be created through its descendants.
 */
class Shape {
  protected:

    // holds shape's id./a.
    long id;

    // holds shape's name
    string name;

    // returns a string representation of class Shape. The method returns the value of id and name separated by an @:
    // <<value of id>>@<<value of name>>
    virtual string toString() const;

  public:
    // Shape();
    // Non-default constructor initializes the instance variables accordingly
    Shape(const long id, const string name);

    // The destructor simply prints the message from toString() to the standard output stream
    virtual ~Shape();

    // Copy constructor to initializes the instance variables from another instance
    Shape(const Shape &other);

    // Overloads the assignment operator to copy values from another instance
    Shape& operator=(Shape &other);

    // An abstract method defined in derived classes only
    virtual double area() = 0;

    // getter for field id
    const long getId() const;

    // getter for field name
    const string& getName() const;

    // Overloads the standard input stream operator to read values for id followed by a value for name respectively
    friend istream& operator>>(istream &is, Shape *shape);

    // Overloads the standard output stream operator to print the message from toString() to the standard output stream
    friend ostream& operator<<(ostream &os, Shape *shape);

    // bonus assignment. Uncomment the function header to overload the ofstream operator
    // Overloads the file output stream operator to write a value for id followed by a value for name respectively
   friend ofstream& operator<<(ofstream &ofs, const Shape *shape);
};

#endif /* SHAPE_H_ */
