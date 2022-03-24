#include <iostream>
#include <fstream>

using namespace std;

// by default c++ commandline program has 3 open channels to your terminal
// cout is the standard output for showing non error messages 
//cerr is the standard output  for showing  error messages 
//cin is the standard input stream for reading from the command line.



int main(){
    // const ISIZE = 10;
    // int arr [ISIZE];

     const int ISIZE = 6;
     double test[ISIZE] ={8, 9, -2, -4, -5, 6};

    // ofstream dataFile("MyFile.out");
    fstream dataFile("MyFile.out", ios::in | ios::out);
    if(dataFile){
        int x = 0;
        cout << "file was opened succesfully!" << endl;

        for(int i=0; i < ISIZE; ++i){

            // dataFile << test[i] << endl;
            dataFile << test[i] << "\n" << flush;

            if ( i == 3)
            //cout << 1 / x << endl;
            cout << "nothing" << endl;

        }
        dataFile.close();

    }else
        cerr << " Error: File Not Found" << endl;


    
    // ifstream dataFile;
    // // dataFile.open("Sales.Dat", ios::in | ios::out);
    // dataFile.open("nums.dat", ios::in | ios::out);
    // // datafile.open("../../...") relative path
    // //dataFile.open("C: /new folder/ sales.dat") fixed or static paths
    // //ensure that the file was opened

    // if(dataFile){
    //     cout << "file was opened succesfully!" << endl;

    //     for(int i=0; i < ISIZE; ++i){
    //         dataFile >> arr[i];
    //     }
    //     dataFile.close();

    //     for(int i=0; i < ISIZE; i++){
    //         cout << "arr [" << i << "]=" << arr[i] << endl;
    //     }
    //     // char ch;
    //     // dataFile >> ch;  
    //     // string str;
    //     // getline(dataFile, str);
    //     // dataFile.close();
    //     // //dataFile << "hello world";//output text to the file.
    //     // cout << ch << endl;
    //     // cout << "$$$$$" << ch << "@@@@" << endl;
    // }else
    //     cerr << " Error: File Not Found" << endl;
}
