#include<iostream>
#include<fstream>
#include<string>

using namespace std;



void writeAndReadToFile(long *arr, const int ISIZE)
{
    ofstream outFile("myFile.bin", ios::binary);
    for(int i= 0; i <ISIZE; ++i){
        outFile.write(reinterpret_cast<char *>(&arr[i]), sizeof(arr[i]));
    }

    outFile.flush();
    outFile.close();
}

int main() {
    static const int ISIZE = 10;
    long arr[ISIZE] = { 1, 53, 66, 57, 8, 92, 50, 13, 77, 25 };
    writeAndReadToFile(arr, ISIZE);
    // write the contents of the array. Use a loop to write the contents ONE AT A TIME
    // open file in binary mode
    // use a loop to write the array - for (int i = 0; i < ISIZE; ++i)

    // read the contents of the file into a new array. Use a loop to read the contents ONE AT A TIME
    long newArr[ISIZE];
    // open file in binary mode
    ifstream inFile("myFile.bin", ios ::binary);
    // use a loop to read the file into the new array - for (int i = 0; i < ISIZE; ++i)
    
    for(int i= 0; i <ISIZE; ++i){

        inFile.read(reinterpret_cast<char *>(&newArr[i]), sizeof(newArr[i]));
    }
    inFile.close();
    // the output must match the original data of the array
    for (long i : newArr)
        cout << i << " ";
    return 0;
}