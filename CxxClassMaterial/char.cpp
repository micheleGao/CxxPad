#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//preprocessor  directive
//complier statements
//linker

class Square{
        int side;
}sq1, sq2;


int main(){
    //string are a user defined datatypes
    string  firstName = "JACK";
    firstName = "John";

    //The string data type allows the programmer 
    //to store different string lengths in the 
    //string variable 

    int arr[] = { 1, 9, -1, -3 };
    char firstname[100] = "Jack";
    //string buffer overflow
    //char arryas are called null terminated arrays
    // | j | a| c |k | \0 |
    firstname[4] = 'G';
    cout << firstname << endl;
    // firstname = "John";

    cout << pow(2,10) << pow(4,5) <<  endl;

    //abstraction is a definition that captures a general characteristics without details 
    //ex, an abstract triangle is a 3-soded polygon. A specific triangle maybe be scalene, isosceles, or equilateral.
    //data types: defines the kind of values that can be stored andf the operation that can be performed on the values
     
     //object orientated programming
    //ptocedural programming uses variables to store data, and focus
    //on the processes/functions that occur in a program. Data and fucntions are separate and distinct.

    //OOP
    //OOP- based on objects that encapsulate the data and the functions that operate with and on the data;
    //methods are functions definedin an object
    //data hiding - restricting data access to certain member of an object, the intent only restricting access to data and directly accessing and modify the data
    //encapulation - buncling of an object's data and procedures into a single entity
    //-must know - object- attribute, member functions
    //class - a programmer defined data type used to define objects

    //______introduction to class _____
    // class declaration format::
    //class className{
        // declaration;
        // declaration;
    // };

    Square sq1, sq2; // this sq1, overshadows sq1 on line before
    //local scope has priority always
    cout << pow(2, 10) << endl;

    //in classes the access specificer default is private 
    //public:which means that they can be accessed and modified from outside the code.
    //private:members cannot be accessed (or viewed) from outside the class

    return 0;
}
