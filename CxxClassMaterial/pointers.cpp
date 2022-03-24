#include <iostream>
#include <string>

using namespace std;

int main(){
    int* p1 = new int, *p2;

    p2=p1;
    int x;
     x = 10; // x is  a variable to store an integer value;
    cout << x; 
    //prints the value of x(which is an int)

    int *p = &x;
    int* p;  // p is the variable to store a MEMORY ADDRESSES OF AN INTEGER VALUE;

    int* p =&x;  
    cout << p; // prints the value of p(which is an memory address to an int)

    int arr [] ={ 4, 7, 11};
    p= arr;
    cout << x << endl; // the val of x;
    cout << &x << endl; //the memory add of x;
    cout << *&x << endl; //indirection over mem add of x;
     cout << p<< endl;
    cout << &p << endl; 
    cout << *p << endl;//indirection over value of p;
    cout << *&p << endl;

    //pointer arithmetic
    // some arithmetic operations can ve sued with piunters:

    //increment decrement operators, 
    // integers can be added to or subtracted from pointers using the operators.
    //one pointer can be subtracted from another using the (- )operator.



    return 0;
}