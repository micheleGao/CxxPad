#include "Property.h"

int main()
{
     Address Owner1;
     Address Properties;
     std::cout
         << "Hello World!\n";
     Property chocolate;
     chocolate.setYearBuilt(1999);
     chocolate.setOwner("James Farley");
     chocolate.getYearBuilt();
     chocolate.getOwner();

     Owner1.state = "New York";
     Owner1.city = "New York";
     Owner1.street = "York";
     Owner1.zip = "112233";

     Properties.state = "New York";
     Properties.city = "New York";
     Properties.street = "York";
     Properties.zip = "112233";


     Property property1;
     property1.setProperty(1999, "JACKBOX");
     property1.getOwner();
     property1.getYearBuilt();
     



     string owner;
     int yearBuilt;
     string street0, city0, state0, zip0, street1, city1, state1, zip1;
     string y = to_string(yearBuilt); // since the getline function only reads string, I used the string "y" to turn the integer into string.

     // don't modify these declarations. Use them to read from the command line
     //   string owner;
     //   int yearBuilt;
     //   string street0, city0, state0, zip0, street1, city1, state1, zip1;

     cout << "Enter an owner: " << endl;
     getline(cin, owner);
     cout << "Hello, " << owner
          << " you're the owner!\n";
     cout << "Enter the year built: " << endl;
     cin >> yearBuilt; //getline only reads into string so i had to store it a variable to read into string
     getline(cin, y);
     cout << "the yearbuilt is: " << yearBuilt << endl;
     cout << "enter the owner street:" << endl;
     getline(cin, street0);
     cout << "enter the owner city:" << endl;
     getline(cin, city0);
     cout << "enter the owner state:" << endl;
     getline(cin, state0);
     cout << "enter the owner zip:" << endl;
     getline(cin, zip0);
     cout << "Owner address: \n"
          << " street: " << street0 << "\n "
          << " city: " << city0 << " \n"
          << " state: " << state0 << " \n"
          << " zip: " << zip0 << "\n " << endl;

     cout << "enter the property street:" << endl;
     getline(cin, street1);
     cout << "enter the property city:" << endl;
     getline(cin, city1);
     cout << "enter the property state:" << endl;
     getline(cin, state1);
     cout << "enter the property zip:" << endl;
     getline(cin, zip1);
     cout << "Property address: \n"
          << " street: " << street1 << "\n "
          << " city: " << city1 << " \n"
          << " state: " << state1 << " \n"
          << " zip: " << zip1 << "\n " << endl;
     Address hello; //mailing
     hello.street = street1;
     hello.state = state1;
     hello.city= city1;
     hello.zip = zip1;

     Address hello1; //physical
     hello1.street = street0;
     hello1.state = state0;
     hello1.city= city0;
     hello1.zip = zip0;
     Property property2( yearBuilt, owner, hello, hello1);
     // Add the proper lines of codes to create an instance of type property2. Name this instance property2
     // Note the next few lines of code will not compile until testproperty is declared and initialized

     //   Don't modify any of the statements below this line
     //   Printing values from property1
     cout << "------------------------------------------------------" << endl;
     cout << "1st Property Info:" << endl;
     cout << "\tOwner: " << property1.getOwner() << endl;
     cout << "\tYear Built: " << property1.getYearBuilt() << endl;

     // Printing using accessors
     cout << endl;
     cout << "2nd Property Info:" << endl;
     cout << "\tOwner: " << property2.getOwner() << endl;
     cout << "\tYear Built: " << property2.getYearBuilt() << endl;


       cout << "Mailing Address: " << endl << "\t" << property2.getOwnerAddress().state << endl
               << "\t" << property2.getOwnerAddress().city << endl
               << "\t" << property2.getOwnerAddress().zip << endl;


           cout << "Physical Address:" << endl << "\t" << property2.getPropertyAddress().state << endl
                   << "\t" << property2.getPropertyAddress().city << endl
                   << "\t" << property2.getPropertyAddress().zip << endl;

     return 0;
}
