//Convert minutes into seconds
//write a function that takes in an int and ocnverts into sec;
//example convert(5)=>300 convert(3)=>180 convert(2)=>120
#include <iostream>
using namespace std;

int min2Sec(int B){
    int A = 60;
    int C = A * B;
    return C;
}

int main(){
    std::cout<< min2Sec(5)<< "\n" << min2Sec(3) << "\n"<< min2Sec(10) << "\n";
}