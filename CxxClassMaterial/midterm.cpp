#include <iostream>
#include <string>
#include<sstream>

using namespace std;

// I. Write the class's definition (header) with the following ONLY:
//   1. Define rate, a private variable of type int.
//	 2. A public default constructor
//	 3. A public non–default constructor with one int parameter
//   4. A destructor


class Measure{
    private:
        int rate;
    public:
        Measure();
        Measure(int r);
        ~Measure();
};

// II. Define the following three members ONLY:
//   1.	default constructor, initialize rate to -1.
//   2.	non–default constructor to initialize private members according to the parameters.
//   3.	destructor to print the message "Done".

Measure :: Measure(){
    rate = -1;
}
Measure :: Measure( int r){
    this->rate = r;
}
Measure :: ~Measure(){
    cout << "Done";
}
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
    Measure *ptrM = new Measure();

    Measure(14);
    
    Measure array[50];


    for (Measure &measure : array){
        cout << "enter values for the instance of the array of rates: " << endl;
        int rates1;
        cin >> rates1;
        measure.setRate(&rates1);
        cout << *measure.getRate() <<endl;
    }
    for (Measure measure : array)
        cout << *measure.getRate() <<endl;

    for (Measure *ptrM : array){
       *ptrM = *measure.getRate();
        ptrM.getRate(array);

    }

    for(int i =0; i<50; i++){
        ostringstream memFormat;
        memFormat << setw(10) << " \n"
                  << endl;
        cout << memFormat.str();
        *ptrM = array[i];
        cout << memFormat.str() << ptrM[i] << endl;
    }
    

  return 0;
}