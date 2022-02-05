#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//Note to professor:
/* the First is inline and the second uncommented the non-inline functions demonstrated */
 
//Inline functions Notes:
/* ========================================================================
C++ inline function is powerful concept that is commonly used with classes. 
If a function is inline, the compiler places a copy of the code of that function at each 
point where the function is called at compile time.
 Any change to an inline function could require all clients of the function to be recompiled because compiler 
would need to replace all the code once again otherwise it will continue with old functionality.
To inline a function, place the keyword inline before the function name and define the 
function before any calls are made to the function. The compiler can ignore the inline qualifier in 
case defined function is more than a line.
 A function definition in a class definition is an inline function definition, 
even without the use of the inline specifier.
C++ provides an inline functions to reduce the function call overhead. 
Inline function is a function that is expanded in line when it is called. When the inline function is 
called whole code of the inline function gets inserted or substituted at the point of inline function call. 
This substitution is performed by the C++ compiler at compile time. 
Inline function may increase efficiency if it is small. 
================================================================================*/
/*
class Computer{
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
Computer :: Computer(){
    year = -1; 
    model = "";
    purpose= "";
}

inline void Computer :: setYear(int newYear){
    year = newYear;
    cout << "New Year :  \n " << year <<endl;
    
}
inline void Computer :: setModel(string newModel){
    model = newModel;
    cout << "New Model :  \n " << model <<endl;
}
inline void Computer :: setPurpose(string newPurpose){
    newPurpose = " ";
    cout << "New Purpose :  \n " << purpose << endl;
}
inline void Computer :: setAll(int newYear, string newModel, string newPurpose){
    int year = newYear;
    string model = newModel;
    string purpose = newPurpose;
    cout << "New Purpose :  \n " << newPurpose << endl;
    cout << "New Model :  \n " << newModel <<endl;
    cout << "New Year :  \n " << newYear <<endl;
}

inline Computer :: ~Computer(){
    cout << "Removed from memory" << endl;
}

int main() {
    Computer chickenRobot; //new instance of Computer
    chickenRobot.setYear(10);
    chickenRobot.setModel("RedDelicious");
    chickenRobot.setPurpose("Read and write files");
    chickenRobot.setAll(20, "SamSweet", "Coding/Programming");
    chickenRobot.~Computer();

    Computer newbie;
    newbie.setYear(100); //new instance of computer
    newbie.setModel("Notebook");
    newbie.setPurpose("Nothing to do but play");
    newbie.setAll(30, "BLAH", "BLAH BLAH BLAH");
    
    
    return 0;
}
*/



//non-inline functions:
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

void Computer :: setYear(int newYear)
{
    year = newYear;
    cout << "New Year :  \n " << year << endl;
}
void Computer :: setModel(string newModel)
{
    model = newModel;
    cout << "New Model :  \n " << model << endl;
}
void Computer :: setPurpose(string newPurpose)
{
    newPurpose = " ";
    cout << "New Purpose :  \n " << purpose << endl;
}
void Computer :: setAll(int newYear, string newModel, string newPurpose)
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

    Computer newbie;
    newbie.setYear(100); //new instance of computer
    newbie.setModel("Notebook");
    newbie.setPurpose("Nothing to do but play");
    newbie.setAll(30, "BLAH", "BLAH BLAH BLAH");

    return 0;
}

