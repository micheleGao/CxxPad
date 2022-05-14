#include <iostream>
#include<string>
#include<sstream>
#include<fstream>
#include <iomanip>
//#include "Measures.h"
using namespace std;
#ifndef not_Measure
#define not_Measure

// I. Write the class's definition (header) with the following ONLY:
//   1. Define rate, a private variable of type int.
//	 2. A public default constructor
//	 3. A public non–default constructor with one int parameter
//   4. A destructor
// II. Define the following three members ONLY:
//   1.	default constructor, initialize rate to -1.
//   2.	non–default constructor to initialize private members according to the parameters.
//   3.	destructor to print the message "Done".
class Measure{
    private:
        int rate;
    public:
        Measure(){
            this->rate = -1;
        }
        Measure(int rate){
            this->rate = rate;
        };
        ~Measure(){
            cout <<"Done" <<endl;
        }
        int setRate( int rate){
            this->rate = rate;
            return rate;
        }
        int getRate(){
            return this->rate;
        }

};


// III. main( ) to perform the following. Assume that setters and getters are defined (i.e., setRate and getRate).
//   1. Create a pointer named ptrM to point to instances of type Measures. Assign ptrM to the memory address of a
//      dynamic instance on the heap. Create the instance using the non–default constructor with value 14.
//   2. Create an array of type Measures and size 50.
//   3. Using a loop, prompt the user to enter values for rate for all instances. Assume that setRate is defined.
//   4. Using the Range-Based FOR loop, count the number of instances with values of rate equal to the value of
//       rate from the pointer ptrM defined in step 1. You must use ptrM for this step; assume getRate is defined.
//   5. Finally print the count value computed in step 4. Using IO manipulators, print the value of count in a
//       column of width 10.


int main() {
    Measure measure(14);
   
    
   Measure *ptrM = new Measure();
   Measure arrayMeasure[50];

       for (Measure &measure : arrayMeasure){
        cout << "enter values for the instance of the array: " << endl;
        int nums;
        cin >> nums;
        measure.setRate(nums);
        // cout << measure.getRate() <<endl;
    }
   
    ostringstream memFormat;
        memFormat << setw(10) << " \n"
                  << endl;
    cout <<memFormat.str() << setw(10)<< "Nums" <<endl;
    cout <<"_____________________________________"<<endl;
    for( Measure &measure: arrayMeasure ){
        
        *ptrM = measure;
        //  measure.getRate()
       cout << memFormat.str() << setw(10) << ptrM->getRate() << endl;
       cout <<"_____________________________________"<<endl;
    }


  return 0;
}
#endif