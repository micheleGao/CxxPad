#include <iostream>
#include <fstream>
using namespace std;

int main() {

  // same as the number of values in sales.dat
  const int ISIZE = 10;
  int sales[ISIZE];

  ifstream input;
  input.open("sales.dat", ios::in | ios::out);

  if (input){
    cout << "file was opened succesfully!" << endl;

        for(int i=0; i < ISIZE; ++i){
            input >> sales[i];
            // cout << sales[i] << endl;
        }
        input.close();

        for(int i=0; i < ISIZE; ++i){
            cout << "arr [" << i << "]=" << sales[i] << endl;
        }
  }else
    cerr << "Error, failed to open file sales.dat" << endl;
  
    
  //   // continue as follows:
  //   // 1. read values from the file
  //   // 2. close the file resource
  //   // 3. print the values stored in the array
}
  // if(!input){
  //   cerr << "Error, failed to open file sales.dat" << endl;
  // }else
  //   cout << "File open OK" << endl;