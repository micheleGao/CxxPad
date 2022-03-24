#include <iostream>
#include<string>

using namespace std;
int main(){
    float temperature = 100.9;
    float* ptrTemp = &temperature;

    temperature++; 
    (*ptrTemp)++;
    cout << temperature << endl; //incrementing temperature--0x16b84b79c
    cout << ptrTemp << endl; //same address-0x16b84b79c
    cout << (*ptrTemp) << endl; //same address- 0x16b84b79c
    // cout << *ptrTemp <<endl;
    cout << &temperature << endl; //0x16b84b79c--address
    cout << &ptrTemp << endl; //0x16b84b790 --address


}