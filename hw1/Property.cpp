#include "Property.h"

// Define methods for class Property

// Define Struct
struct Address//structures are user defined data types
{
    public:
        string street;
        string city;
        string state;
        string zip;

};

//Define class Property

class Property
{   // Access specifier
    private: //private member variables
        int yearBuilt;
        string owner;
        Address ownerAddress;
        Address propertyAddress;
//default constructor
Property ::Property()
{
    int yearBuilt = 0;
    string owner = "";
}

void Property ::setProperty(int y, string o)
{
    yearBuilt = y;
    owner = o;
}
// non-default constructor
void Property ::setYearBuilt(int y)
{
    int yearBuilt = y;
}
void Property ::setOwner(string o)
{
    string owner = o;
}
int getYearBuilt(int y)
{
    return y;
}
string getOwner(string o)
{
    return o;
}

// void Property :: setPropertyAdress(string c, string z, string st, string sta){
//     string state = sta;
//     string city = c;
//     string zip = z;
//     string street = st;
// }
// void Property ::getOwnerAddress(string c, string z, string st, string sta)
// {
//     string state = sta;
//     string city = c;
//     string zip = z;
//     string street = st;
//     cout << " owner's state: " << sta << endl;
//     cout << "owner's city: " << c << endl;
//     cout << "owner's zip: " << z << endl;
//     cout << "owner's street: " << st << endl;
// }
// void Property ::getPropertyAddress(string c, string z, string st, string sta)
// {
//     string state = sta;
//     string city = c;
//     string zip = z;
//     string street = st;
//     cout << " property's state: " << sta << endl;
//     cout << "property's city: " << c << endl;
//     cout << "property's zip: " << z << endl;
//     cout << "property's street: " << st << endl;
// }
Property ::~Property()
{
    cout << "Clean up operations" << endl;
}
