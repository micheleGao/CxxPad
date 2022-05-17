#include "Shape.h"

using namespace std;

string Shape::toString() const
{
    // to_string()
    return to_string(this->id) + "@" + this->name;
}

// Non-default constructor initializes the instance variables accordingly
Shape::Shape(const long id, const string name)
{
    this->id = id;
    this->name = name;
}

// The destructor simply prints the message from toString() to the standard output stream
Shape::~Shape()
{
    cout << toString() << endl;
}

// Copy constructor to initializes the instance variables from another instance
Shape::Shape(const Shape &other)
{
    this->id = other.id;
    this->name = other.name;
}

// Overloads the assignment operator to copy values from another instance
Shape &Shape::operator=(Shape &other)
{
    this->id = other.id;
    this->name = other.id;
    return *this;
}

// getter for field id
const long Shape::getId() const
{
    return this->id;
}

// getter for field name
const string &Shape::getName() const
{
    return this->name;
}

// Overloads the standard input stream operator to read values for id followed by a value for name respectively
istream &operator>>(istream &is, Shape *shape)
{
    // cout << shape->id <<endl;
    is >> shape->id >> shape->name;
    // is  >> ((Shape *)shape)->toString() >> endl;

    return is;

    // is.read(reinterpret_cast<char *>(&shape->id), sizeof(shape->id));

    // long name_len;
    // shape->name.resize(name_len);
    // is.read(reinterpret_cast<char *>(&shape->name[0]), name_len);

    // return is;
}

// Overloads the standard output stream operator to print the message from toString() to the standard output stream
ostream &operator<<(ostream &os, Shape *shape)
{
    os << shape->toString() << endl;
    // os << shape->id << shape->name;
    return os;

    // os.write(reinterpret_cast<char*>(&shape->id), sizeof(shape->id));

    // long name_len;
    // shape->name.resize(name_len);
    // os.write(reinterpret_cast<char *>(&shape->name[0]), name_len);

    // return os;
}

ofstream &operator<<(ofstream &ofs, const Shape *shape)
{
    ofs << shape->id <<  "\t" << shape->name;

    return ofs;
}
