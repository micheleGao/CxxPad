#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//prompt the user to enter the 10 numbers
//print the maximium and min number
//print the average

// int findMax(int a, int b){
    
// }

//while is a pretest loop
//do postest loop
//for loop pretest 


int main()
//INITAILIZE FROM THE USER
{

    int sum;
    int min = INT32_MAX;
    int max = INT32_MIN;
    int input;

    cout <<"Enter a number" ;
    cin >> min;
    max = max;
    sum += min; //must change the for loop to one;

    for(int i=0; i<10; i++){
        cout  <<"enter a value:";
        cin >> input;
    
        if (input < min){
            min = input;
        }

        if (input > max){
            max = input;
        }
        
        sum += input;
    }

    cout << "Max : " << max <<'\n' << endl;
    cout << "Min : " << min << '\n' << endl;
    cout << "Average" << (sum /10.0) << endl;

}