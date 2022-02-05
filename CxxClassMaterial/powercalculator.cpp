//create a function that takes in a voltage and current ans returns the calculated power. Examples circuitPower(230, 10)-> 2300 circuitPower(480, 20)->9600 Note requires Basic calculation of electrical circuits(see resources for info)
// Power(watts) = Voltage * electrical currents (amperes)

#include <iostream>
using namespace std;

int circuitPower (int V, int C){
    int P;
    P = V * C;
    return P;
    
}

int main(){
    std:: cout << "Circuit power : " << circuitPower(230, 10);
    std:: cout << "Circuit power : " << circuitPower(110, 3);

}