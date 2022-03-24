#include <iostream>
#include <string>

using namespace std;

// Define Struct
struct Address//structures are user defined data types
{
    public:
        string street;
        string city;
        string state;
        string zip;

};

// Define class Property

class Property
{   // Access specifier
    private: //private member variables
        int yearBuilt;
        string owner;
        Address ownerAddress;
        Address propertyAddress;
    public: 
        Property();//default constructor
        void setProperty( int y, string o);//non-default constructor 
        void setYearBuilt(int y);//setter
        void  setOwner(string o); 
        int getYearBuilt(); //getter
        string getOwner();
        // void setOwnerAddress(string c, string z, string st, string sta);
        // void setPropertyAdress(string c, string z, string st, string sta);
        void getOwnerAddress(string c, string z, string st, string sta);
        void getPropertyAddress(string c, string z, string st, string sta);
        string getOwnerAddress();
        string getPropertyAddress();
        ~Property();
        

};