#include "Car.h"

Car ::Car(){
    brand="";
    weight =0;
}
Car :: Car (string b,double w ){
    brand = b;
    weight = w;
}
Car ::~Car(){
    cout << "Finally ..." <<endl; 
}