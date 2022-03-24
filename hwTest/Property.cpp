#include "Property.h"

Property ::Property() 
{
    yearBuilt = 0;
    owner = "";
}
Property ::Property( int yearBuilt, string owner, Address ownerAddress, Address propertyAddress) 
//constructor to initalize the four members of property;
{
    this->yearBuilt = yearBuilt;
    this->owner = owner;
    this-> ownerAddress = ownerAddress;
    this->propertyAddress =propertyAddress;

}

void Property ::setYearBuilt(int y)
{
    yearBuilt = y;
}

void Property ::setOwner(string o) 
{
    owner = o;
}

void Property ::setProperty(int y, string o)
{
    yearBuilt = y;
    owner = o;
}

void  Property ::setOwnerAddress( Address ownerAddress)
{
    this->ownerAddress = ownerAddress;
}

void Property ::setPropertyAddress(Address propertyAddress)
{
    this->propertyAddress = propertyAddress;
}

Address Property ::getOwnerAddress()
{   
    return ownerAddress; 

}
Address Property ::getPropertyAddress()
{   
    return propertyAddress; //return the owner address in the struct

}
int Property ::getYearBuilt()
{
    return yearBuilt;
}
string Property ::getOwner()
{
    return owner;
}
Property :: ~Property(){
   cout << "Cleanup Operations" << endl;
}