#include <iostream>
#include<string>

using namespace std;

// void swap(int* x, int* y){
//     int temp;
//     temp  = *x;
//     *x = *y;
//     *y = temp;
// }

// int* fun1(){

//     int* x = new int; //reserves 4 bytes on the heap
//     *x = 10;
//     return x;
// }

// void fun2( int i){
//     cout << "hello" << endl;
// }

//return a dynamically created array;
float * createArray(const int ISIZE){
    float *arr = new float[ISIZE];
    return arr;

}
//same as : (float grades[], int size)
void  promptUser(float * grades, int size){
    cout << "Enter Grades:" << endl;
    for(int i =0; i < size; i++){
        cin >> grades[i];
    }
    // for(int i =0; i < size; i++){
    //     cin >> *grades[i];
    //     ++grades;
    // }
}

void ptrArray(float grades[], int size){
    for(int i =0; i < size; i++){
        cout << grades[i] <<  ",";
    }
}
int main(){
    // int num1= 2, num2= -3;
    // swap(&num1, &num2);
    // const int x =10;
    // int y = 20;

    // const int* const ptr = &x;
    //*ptr = 11;
    //ptr = &y;

    //you allocate storage for a variable while a program is running.
    //use the new opearator to allocate memory

    // double *ptr;
    // //dptr = new double;

    // int*a =fun1();
    // cout << *a << endl; 
    // fun2(550);
    

    //create a program to store 10 grades;
    //invoke a function to create an array;
    //invoke a function to prompt the user;
    //invoke a function to print the array;
    const int ISIZE = 10;

    int size;
    // cout <<"how many grades?" <<endl;
    // cin >> size;
    float *grades = createArray(10);
    promptUser(grades, 10);
    ptrArray(grades, 10);
    delete [] grades;

}