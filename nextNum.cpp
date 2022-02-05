//Create a function that takes a number as an argument, add one to the number,
//return the result
//example addition(0)=>1 addition(9)=>10 addition(-3)=>(-2)
#include <iostream>
using namespace std;

int addition(int a){
    int sum = a +1;
    return sum;
}

int main(){
    std :: cout << addition(1) << "\n" << addition(-3) << "\n" << addition(9) << "\n";

}