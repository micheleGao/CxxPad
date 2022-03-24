#include <iostream>
#include <string>
#include <fstream>

#include "Property.h"

using namespace std;

int main()
{

  // Create an instance of type Property using the default constructor.
  // Set name to "Jack Box" and year built to 1958. Call the instance property1.
  // Don't modify any other members
  Property property1;
  property1.setProperty(1958, "jACK bOX");
  property1.setOwner("yo");
  property1.setYearBuilt(1000);
  property1.getOwner();
  property1.getYearBuilt();
  // property1.getPropertyAddress("nyack", "22334", "california", "nice");
  // property1.getOwnerAddress("nyack", "22334", "california", "nice");
  

  // don't modify these declarations. Use them to read from the command line
  //   string owner;
  //   int yearBuilt;
  //   string street0, city0, state0, zip0, street1, city1, state1, zip1;


  // use the variable declarations above
  // prompt the user to enter 10 values for owner, yearBuilt, mailing address, and physical address
  // remember to print the prompts as shown in the PDF
  // use getline to read lines into the string variables
 

  // Add the proper lines of codes to create an instance of type property2. Name this instance property2
  // Note the next few lines of code will not compile until testproperty is declared and initialized

  // ...

  // Don't modify any of the statements below this line
  // Printing values from property1
  // cout << "------------------------------------------------------" << endl;
  // cout << "1st Property Info:" << endl;
  // cout << "\tOwner: " << property1.getOwner() << endl;
  // cout << "\tYear Built: " << property1.getYearBuilt() << endl;

  // // Printing using accessors
  // cout << endl;
  // cout << "2nd Property Info:" << endl;
  // cout << "\tOwner: " << property2.getOwner() << endl;
  // cout << "\tYear Built: " << property2.getYearBuilt() << endl;
  // cout << "Mailing Address: " << endl << "\t" << property2.getOwnerAddress().state << endl
  //         << "\t" << property2.getOwnerAddress().city << endl
  //         << "\t" << property2.getOwnerAddress().zip << endl;

  // cout << "Physical Address:" << endl << "\t" << property2.getPropertyAddress().state << endl
  //         << "\t" << property2.getPropertyAddress().city << endl
  //         << "\t" << property2.getPropertyAddress().zip << endl;

  return 0;
}
