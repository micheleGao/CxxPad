// Your First C++ Program

#include <iostream>
using namespace std;
#include <fstream>
#include <string>

// int addition(int a, int b){
//     int r;
//     r = a+b;
//     return r;
// }

// void decrement( int n){
//     while (n > 0){
//         std :: cout << n << ",";
//         --n;
//     }
// }

// void duplicate(int& a, int& b, int& c){
//     a*=4;
//     b*=5;
//     c*=6;
// }

// int main() {
    // std::cout << "Hello World!";
    
    // int firstNumber, secondNumber, sumOfAll;

    // std :: cout << "Enter your dick number : \n" ;
    // std :: cin >> firstNumber;
    // std :: cout <<"Enter your second number for you pinky: \n" ;
    // std :: cin >> secondNumber;

    // //sum of 2 numns in stored in var
    // sumOfAll = firstNumber + secondNumber;

    // //print sum
    // std::cout << firstNumber << " + " << secondNumber << " = " << sumOfAll << "\n";

    
    // std::string str = "password nice";
    // std::string str2= "nice try asshole";

    // while (str.length() != str2.length()){
    //     std::cout << "Sorry, your password is wrong  \n";
    //     break;
    // }

    // for(int i =0; i <10; i++){
    //     int y = i +1;
    //     std::cout << i + y << "\n";
    //     while (y >= 5 ){
    //         std::cout << y << "\n";

    //     }
    //      break;
    // }

    int main(){
        fstream myFile;
        // myFile.open("michele.txt", ios::out); //write mode
        // if(myFile.is_open()){
        //     cout << "Hello \n"; //output text to a console.
        //     myFile << "hello \n"; //output text to the file.
        //     myFile << "this is the second line \n" ;
        //     myFile.close();
        // }
        // myFile.open("michele.txt", ios:: app); //write mode appended
        // if(myFile.is_open()){
        //     cout << "Hello2 \n"; //output text to a console.
        //     myFile << "hello 2 \n"; //output text to the file.
        //     myFile.close();
        // }

        myFile.open("michele.txt", ios::in);
        if(myFile.is_open()){
            string line;
            while(getline(myFile, line)){
                cout << line << endl;
            }
            myFile.close();
        }

        



        // int h= 4, i=8, j=10;
        // duplicate(h, i, j);
        // cout << "h=" << h << "\n" << "i=" << i << "\n" << "j=" << j << "\n" ;
        // return 0;
        // int z;
        // z =addition(5, 3);
        // cout << "the result is :: " << z << "\n";

        // decrement(10);
        
        // std :: cout << "lift off motherfuckers!! \n : " ;

        // return 0;

       
    }


    // return 0;
// }