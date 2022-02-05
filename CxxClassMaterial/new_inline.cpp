#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Computer
{
private:
    int year;
    string model;
    string purpose;

public:
    // Computer(); //declaration of the default constructor
    // void setYear(int newYear);
    // void setModel(string newModel);
    // void setPurpose(string newPurpose);
    // void setAll(int newYear, string newModel, string newPurpose);
    // ~Computer();
    // Computer() : Computer (-1, "", ""){
    // }
    // Computer(int y, string m): Computer (y, m , ""){

    // }
    Computer(int y, string m, string p){
        year =y;
        model =m;
        purpose = p;
    }
    int getYear(){
        return year;
    }
    void setYear(int y){
        year = y;
    }
    ~Computer(){
        cout << "Removed from memory" << endl;
    }
};


int main(){

}