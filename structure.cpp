#include <iostream>
using namespace std;

//blueprint  of the structure
struct smartPhone{
    string name;
    int storageSpace;
    string color;
    float price;
};
int main(){
    //structures are user defined data types
    // string name = "iphone 12";
    // int storageSpace = 32;
    // string color = "black";
    // float price = "999.99";

    // string name2 = "zFlip 3";
    // int storageSpace2 = 32;
    // string color2 = "black";
    // float price2 = "1342.99";

    smartPhone smartphone;
    smartphone.name = "ZFold 3";
    smartphone.storageSpace= 64;
    smartphone.color = "purple";
    smartphone.price= 2000.99;

    smartPhone smartphone1;
    smartphone1.name = "Zflip 3";
    smartphone1.storageSpace= 64;
    smartphone1.color = "Green";
    smartphone1.price= 2000.99;


    smartPhone smartphone2;
    smartphone2.name = "iphone 13";
    smartphone2.storageSpace= 64;
    smartphone2.color = "Red";
    smartphone2.price= 999.99;

    smartPhone smartphone3;
    smartphone3.name = "Zflip 3";
    smartphone3.storageSpace= 64;
    smartphone3.color = "Black";
    smartphone3.price= 2000.99;

    cout << "Name: " << smartphone3.name << "\n";


}