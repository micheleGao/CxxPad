#include <iostream>
#include<string>

using namespace std;

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

}
void ptrArray(float grades[], int size){
    for(int i =0; i < size; i++){
        cout << grades[i] <<  ",";
    }
}
int main(){


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