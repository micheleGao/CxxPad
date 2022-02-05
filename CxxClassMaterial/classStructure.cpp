#include <iostream>
#include <string>

using namespace std;

class Square
{
    // int length; // int is not a class, therefore this is not a composition.
    // string model; //since string is a  class, then model is the composition.
    // Square s;
    // Class variable are called instance variables.
public:
    int length;
    Square(int l)
    {
        length = l;
    }
    void setLength(int l)
    {
        length = l;
    }
    int getLength(int l) const
    {
        // getLength is a const function which is not allowed to modify the class's variables
        return length;
    }
};

// Square :: Square(int l){
//     length =l;
// }
// void :: setLength( int l){
//     length = l ;
// }

// const int Square :: getLength( int l){
//     return length;
// }
// void f1(Square &sParam){
//     cout << "add. of sParam: " << &sParam << endl;
//     sParam.length = -5;
// }
// void f1(const Square &sParam){
//     cout << s2.getLength() << endl;

// }

// class Carpet
// {
// public:
//     // Square s;
//     double price;
//     // Square m;
// };
// Square f1(){
//     Square s(88);
//     return s;
// }

int main()
{
    // Square s1(100);
    // Square s2(3000);
    // Square s1 = f1();
    // f1(s1);

    // cout << "add. of s1: " << & s1 << endl;
    // cout << s1.length << endl;

    // return 0;

    // Carpet c1;
    // c1.price = 100.1;
    // c1.m.length = 11;
}


// object composition
