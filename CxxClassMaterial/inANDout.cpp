#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void writeToFile(double *arr)
{
    ofstream outFile("myFile.bin", ios::binary);
    for (int i = 0; i < 5; ++i)
    {
        outFile.write(reinterpret_cast<char *>(&arr[i]), sizeof(arr[i]));
    }

    // outFile.write(reinterpret_cast<char *>(arr), sizeof(arr));

    // outFile.write(reinterpret_cast<char*> (&val), sizeof(val));
    outFile.flush();
    outFile.close();
}

struct TestScore
{
    int studentID;
    double score;
    char grade;
};
// //file output is similar to cout instead the stream is connected to a file on the FS
int main()
{
    // TestScore tst1{123,80.99, 'B'};
    // TestScore test2{234, 99.1, 'A'};

    // ofstream fileOut("TestScores.bin", ios::binary);

    // fileOut.write(reinterpret_cast<char*>(&tst1), sizeof(tst1));
    // fileOut.write(reinterpret_cast<char*>(&test2), sizeof(test2));

    // fileOut.flush();
    // fileOut.close();

    // TestScore ts3, ts4;
    // ifstream inFile("TestScores.bin", ios:: binary);
    // inFile.read(reinterpret_cast<char*>(&ts3), sizeof(ts3));
    // inFile.read(reinterpret_cast<char*>(&ts4), sizeof(ts4));
    // inFile.close();

    string name ="Apple Os";
    //before writing the string write its length as an int;
    int len = name.length();
    ofstream fileOut("strings.bin", ios::binary);
    fileOut.write(reinterpret_cast<char*>(&len), sizeof(len));
    fileOut.write(reinterpret_cast<char*>(&name[0]), len);
    // fileOut.write(reinterpret_cast<char*>(&name[0]), name.length());
    fileOut.flush();
    fileOut.close();

   ifstream inFile("strings.bin", ios:: binary);
   int lenRead =-1;
   inFile.read(reinterpret_cast<char*>(&lenRead), sizeof(lenRead));


//     string nameRead;
//    nameRead.resize(9);
//     inFile.read(reinterpret_cast<char*>(&nameRead[0]), 8);
    string nameRead;
   nameRead.resize(lenRead);
    inFile.read(reinterpret_cast<char*>(&nameRead[0]),lenRead);

    inFile.close();

    cout << nameRead << endl;
    // inFile.read(reinterpret_cast<char*>(&ts4), sizeof(ts4));
    // inFile.close();

    // int arr[]={9,4,8,8,6,8,9,7};
    // ofstream outFile;
    // // outFile.open("myFile.txt", ios :: out);
    // outFile.open("myFile.txt", ios :: out);

    // if(outFile){
    //     // for (int i=0; i<7; i++)
    //     //     outFile << arr[i]<< "";
    //     //     if (i ==4){
    //     //         int x = 8/ (i-4);
    //     //         cout << x << endl;
    //     //     }

    //     outFile.seekp(3L,  ios::beg);
    //     outFile << "@" ;
    //     outFile.flush();
    //     outFile.close();
    // }else
    //     cout << "uh oh" <<endl;

    // double val = 5.1;
    // double arr[] = {3.42, 3.85, 3.71, 10.41, 4.45, 2.07, 10.16, 6.97};

    // ofstream outFile("myFile.bin", ios::binary);

    // outFile.write(reinterpret_cast<char *>(&arr), sizeof(arr));

    // // outFile.write(reinterpret_cast<char*> (&val), sizeof(val));
    // outFile.flush();
    // outFile.close();

    // double arr2[5] = {-1, -1, -1, -1, -1};
    // ifstream inFile("myFile.bin", ios ::binary);
    // // char ch;
    // // inFile.read(reinterpret_cast<char*>(&ch), sizeof(ch));
    // // inFile.read(reinterpret_cast<char*>(&arr2), sizeof(arr2));
    // inFile.read(reinterpret_cast<char *>(&arr2), sizeof(double) * 2);

    // inFile.close();

    // for (double d : arr2)
    //     cout << d << "";

    // //reading
    // ifstream inFile("myFile.bin", ios :: binary);
    // double val2 = -9;
    // int *i2 = new int;
    // *i2 =-9;
    // int i2= 3;

    // int *i3= new int;
    // *i3= -9;
    // inFile.read(reinterpret_cast<char*>(&val2), sizeof(double);
    // inFile.read(reinterpret_cast<char*>(i2), sizeof(int);
    // inFile.read(reinterpret_cast<char*>(&i2), sizeof(int);
}