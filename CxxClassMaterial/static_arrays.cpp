#include <iostream>
using namespace std;
// Statically declared arrays are allocated memory at compile time and their size is fixed,
//  i.e., cannot be changed later. They can be initialized in a manner similar to Java. 
// For example two int arrays are declared, one initialized, one not. 
// Static multi-dimensional arrays are declared with multiple dimensions

//c++ computes the starting memory address of an arrays element using this formula:
//Base Addy + SUBCRIPT * sizeOf (Datatype)

long long someIndex(){
    return 1;
}



int main(){
    //static arrays
    const int   STUDENT_COUNT = 100;
    float tests [STUDENT_COUNT];

    // cout << "enter a value: " << endl;
    // cin >> tests[0];
    // cout << tests[someIndex()] << endl; // returns the memory location - memory address, starting;

    // tests[2] = 10;
    // 100 +2 *4;
    // 100 + 8;
    // 108;

    //prompt the user to enter a 100 grades
    for (int i=0; i <= STUDENT_COUNT; ++i)
    {
        cout << "Enter a value for element # :" << i <<  ":" << endl;
        cin >> tests[i];
    }

    for (int i=0; i <= STUDENT_COUNT; ++i)
    {
        cout << "test[" << i << "] = " << tests[i] << endl;

    }
}