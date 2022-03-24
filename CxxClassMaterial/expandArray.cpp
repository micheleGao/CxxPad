#include <iostream>
#include<string>

using namespace std;

float *expandArray(float * arr, int size){
    //create a new array with twice the size as the old one
    float * arrTemp = new float [size *2];
    //copy the old array into the new array
    for (int i =0; i <size; ++i)
        arrTemp[i] = arr[i];

    //deallocate the old array;
    delete[]arr;
    //return the BA of the new array
    return arrTemp;
}

int main(){
    //createa dynamic array of size five
    int size =5;
    float * arr = new float [size];
    //prompt the user to enter values. The prompt ends when a negative value is entered
    float userInput;
    int index =0;
    cout << "Enter Grades: (negatives to stop) " ;
    do{
        cin >> userInput;
        if (userInput >=0){
            if(index == size){
                cout << "Array is full, expanding..." << endl;
                arr = expandArray (arr, size);
                size *= 2;
            }
            arr[index] = userInput;
            ++index;
        }
    }while(userInput >=0);
    cout << endl << endl;
        for(int i =0; i <index; ++i)
            cout << arr[i] << "," ;

    cout << endl;
}