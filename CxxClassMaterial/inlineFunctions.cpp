#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Part I: Use inline function definitions.
// 1. Create a class named Computer
// 2. Add the following private member variables
//    - an int variable named year
//    - a string variable named model
//    - a string variable named purpose
// 3. Add the following public functions:
//    - Default constructor which sets numeric members to -1 and string members to the empty string
//    - Destructor to print "Removed from memory"
//    - A non-default constructor to set the year and model variables only.
// The "purpose" variable should be set to the empty string.
//    - A non-default constructor to set all THREE member variables.
//    - Accessor and Mutators for all THREE member variables (total 6 methods)
// 4. Write test code to test all member functions (constructors, accessors, mutators, destructor ...)
// Part II: redo the same class but using non-inline function definitions.
// Declare the functions inside the class and define them outside.

class Computer
{
private:
    int year;
    string model;
    string purpose;

public:
    Computer(); //declaration of the default constructor
    void setYear(int newYear);
    void setModel(string newModel);
    void setPurpose(string newPurpose);
    void setAll(int newYear, string newModel, string newPurpose);
    ~Computer();
};

Computer ::Computer()
{
    year = -1;
    model = "";
    purpose = "";
}

void Computer ::setYear(int newYear)
{
    year = newYear;
    cout << "New Year :  \n " << year << endl;
}
void Computer ::setModel(string newModel)
{
    model = newModel;
    cout << "New Model :  \n " << model << endl;
}
void Computer ::setPurpose(string newPurpose)
{
    newPurpose = " ";
    cout << "New Purpose :  \n " << purpose << endl;
}
void setAll(int newYear, string newModel, string newPurpose)
{
    int year = newYear;
    string model = newModel;
    string purpose = newPurpose;
    cout << "New Purpose :  \n " << newPurpose << endl;
    cout << "New Model :  \n " << newModel << endl;
    cout << "New Year :  \n " << newYear << endl;
}

Computer ::~Computer()
{
    cout << "Removed from memory" << endl;
}

int main()
{
    Computer chickenRobot; //new instance of Computer
    chickenRobot.setYear(10);
    chickenRobot.setModel("RedDelicious");
    chickenRobot.setPurpose("Read and write files");
    chickenRobot.setAll(20, "SamSweet", "Coding/Programming");
    chickenRobot.~Computer();

    return 0;
}