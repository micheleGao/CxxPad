
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

struct Address
{
    string street;
    string city;
    string state;
    string zip;
};

class Property
{
private:
    int yearBuilt;
    string owner;
    Address ownerAddress;
    Address propertyAddress;

public:
    Property(); //default Constructor
    Property( int yearBuilt, string owner, Address ownerAddress, Address propertyAddress);
    void setYearBuilt(int y); //setter for yearbuilt
    void setOwner(string o); //setter for owner
    void setProperty(int y, string o); //setter
    void setOwnerAddress( Address ownerAddress); //setter
    void setPropertyAddress(Address propertyAddress); //setter
    int getYearBuilt(); // accessors 
    string getOwner();  // accessors 
    Address getOwnerAddress();  // accessors 
    Address getPropertyAddress();  // accessors 
    ~Property(); //destructor
};
