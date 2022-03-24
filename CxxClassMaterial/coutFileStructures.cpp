#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

int main(){
    string item1 = "Google Pixel";
    string item2 = "Samsung Galaxy";
    string item3 = "iPhone 3";

    double price1 = 800.99909;
    double price2 = 1119.9909;
    double price3 = 1990.99909;

    double total = price1 + price2 + price3;
    double tax = 0.0875 * total;

    cout << setw(15) << "hello there" << "ABC" << endl;
    cout << setw(15) << left << "Hello There" << "abc" << endl;

    cout <<right << setprecision(2) <<fixed;
    cout << setw(15) << item1 << " " << price1 << endl;
    cout << setw(15) << item2 << " " << price2 << endl;
    cout << setw(15) << item3 << " " << price3 << endl;
    cout << setw(15) << "total: " << " "  << total <<endl;
    cout << setw(15) << "tax: " << " " << tax << endl;
    cout << setw(15) << "subTotal: " << " " << (tax + total)  << endl;
    
    float f = 0.12355657;
    cout << scientific << f << endl;

    int d = 345677;
    cout << hex << d << endl;

    ostringstream memFormat;
    memFormat <<setfill('@') << setw(10) << "A" << endl;

    cout << memFormat.str();

    exit(0);


    
}

