#include "Car.h"

int main(){
    
    cout << "hello" << endl;
    Car arr[10];
    string brands;
    string weights;

    cout << "Enter Values for Brand:" << endl;

     for(int i=0; i <10; i++){
        cin >> arr[i].brand;
        cout << arr[i].brand;
    }
    cout << "Enter Values for weight:" << endl;

     for(int i=0; i <10; i++){
        cin >> arr[i].weight;
        cout << arr[i].weight;
    }
    
}