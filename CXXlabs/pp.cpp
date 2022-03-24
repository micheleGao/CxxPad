#include <iostream>
#include <string>

using namespace std;

// Define Struct
struct ADDRESS
{
    public:
        string model;
        string city;
        string state;
        string zip;

};
// ADDRESS Owner; // create structure variable
// ADDRESS property;

// Define class Property
// ...
class Address
{   
    private: //private member variables
        int yearBuilt;
        string owner;
        ADDRESS ownerAddress;
        ADDRESS propertyAddress;
    public: 
        Address(); //constructor
        void setAddress(); //non-default constructor
        // ~Address();

// Address(){
//     int yearBuilt = 0;
//     string owner = "";
// }
void setAddress(int y, string o){
    int yearBuilt = y;
    string owner = o;
}

~Address(){
    cout <<"Cleanup Operations" << endl;
}

int main(){
    std :: cout << "hello" << endl;
    return 0;
}