#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

string lineSeparator = "+-------------+-------------+-------------+-------------+";
string header = "| Screen Size | Weight      | Brand       | Resolution  |";

/*
 * Implement the three prototyped insertion and extraction operators.
 */
struct Television
{
    int screenSize = 0;
    double weight = 0;
    string brand = "";
    string resoultion = "";

public:
    //======================================================================================================
    // Complier on vs code is getting an error:
    //         television.cpp:14:8: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 4 were provided
    // struct Television {
    //        ^
    // television.cpp:14:8: note: candidate constructor (the implicit move constructor) not viable: requires 1 argument, but 4 were provided
    // television.cpp:21:9: note: candidate constructor not viable: requires 0 arguments, but 4 were provided
    //         Television(){int screenSize = 0;double weight = 0;string brand = "";string resoultion = "";};
    //         ^
    // television.cpp:89:21: error: no matching constructor for initialization of 'Television'
    //                     { 15, 5.8, "Sony", "1366 X 768" }
    //=======================================================================================================
    // I created these constructor and default constructors to see if this helps with the error.
    // Television();
    // Television(int s, double w, string b, string r){s = screenSize; w = weight;b = brand; r= resoultion;};
    //=======================================================================================================
    // error:
    //     television.cpp:124:16: error: no matching constructor for initialization of 'Television [8]'
    //     Television READ_ARR_TV[SIZE];
    //                ^
    // television.cpp:14:8: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 0 were provided
    // struct Television {
    //        ^
    // television.cpp:14:8: note: candidate constructor (the implicit move constructor) not viable: requires 1 argument, but 0 were provided
    // television.cpp:21:9: note: candidate constructor not viable: requires 4 arguments, but 0 were provided
    //         Television(int s, double w, string b, string r){s = screenSize;w = weight;b = brand; r= resoultion;};
    //         ^
    // 1 error generated.
    // Micheles-MBP:hwTest3 shellshellies$ g++ -std=c++11 television.cpp
    // Undefined symbols for architecture arm64:
    //   "Television::Television()", referenced from:
    //       _main in television-6892c3.o
    // ld: symbol(s) not found for architecture arm64
    //=======================================================================================================
    // Works fine when I copy and paste the code to replit *** 
    //=======================================================================================================
    // (34P) Writes the contents of the four member variables to the standard output stream in a formatted fashion
    //       Before the function prints the members' values
    // Use set(12) for each value's column width to align the columns with the header
    friend ostream &operator<<(ostream &out, Television &television);

    // (33P) Writes the contents of the four member variables to the the file output BINARY stream
    //       Write the members in order
    friend ofstream &operator<<(ofstream &out, Television &television);

    // (33P) Read the contents of the four member variables from the the file input BINARY stream
    //       Read members in the same order they were written. Remember that string objects need
    //       special attention to their size before reading
    friend ifstream &operator>>(ifstream &in, Television &television);
};

ostream &operator<<(ostream &out, Television &television)
{

    out << setw(12) << television.screenSize << setw(12) << television.weight << setw(12) << television.brand << setw(12) << television.resoultion;
    return out;
}

ofstream &operator<<(ofstream &out, Television &television)
{
    out.write(reinterpret_cast<char *>(&television.screenSize), sizeof(television.screenSize));
    out.write(reinterpret_cast<char *>(&television.weight), sizeof(television.weight));
    int brandLen = television.brand.length();
    out.write(reinterpret_cast<char *>(&brandLen), sizeof(brandLen));
    out.write(reinterpret_cast<char *>(&television.brand[0]), brandLen);
    int resoultionLen = television.resoultion.length();
    out.write(reinterpret_cast<char *>(&resoultionLen), sizeof(resoultionLen));
    out.write(reinterpret_cast<char *>(&television.resoultion[0]), resoultionLen);
    return out;
}
ifstream &operator>>(ifstream &in, Television &television)
{
    in.read(reinterpret_cast<char *>(&television.screenSize), sizeof(television.screenSize));
    in.read(reinterpret_cast<char *>(&television.weight), sizeof(television.weight));
    int brandLen;
    in.read(reinterpret_cast<char *>(&brandLen), sizeof(int));
    television.brand.resize(brandLen);
    in.read(reinterpret_cast<char *>(&television.brand[0]), brandLen);

    int resoultionLen;
    in.read(reinterpret_cast<char *>(&resoultionLen), sizeof(int));
    television.resoultion.resize(resoultionLen);
    in.read(reinterpret_cast<char *>(&television.resoultion[0]), resoultionLen);

    return in;
}

// ************************************************************************
// *********** Please, do not modify any of the lines hereafter ***********
// ******** You may wish to comment out certain lines temporarily *********
// ************************************************************************

const static string inputOutputFile = "Television.bin";
const static int SIZE = 8;

int main()
{

    // Test data, an array of 8 instances of type Television
    Television WRITE_ARR_TV[SIZE] = {
        {55, 27.7f, "TCL", "1224 X 600"},
        {64, 26.7f, "LG", "480 X 480"},
        {85, 22.9, "Samsung", "720 X 720"},
        {83, 20.2, "TCL", "1280 X 1280"},
        {22, 8.7, "LG", "2160 X 2160"},
        {50, 23.9, "Sony", "1366 X 768"},
        {70, 29.9, "TCL", "1280 X 1280"},
        {15, 5.8, "Sony", "1366 X 768"}};

    cout << "Testing write to standard output. The operator<<(ostream& ... should be defined)" << endl;
    cout << lineSeparator << endl
         << header << endl
         << lineSeparator << endl;

    for (Television &television : WRITE_ARR_TV)
        cout << television << endl;

    cout << lineSeparator << endl
         << endl;

    cout << "Testing write to file. The operator<<(ofstream& ... should be defined)" << endl;

    ofstream outFile(inputOutputFile, ios::binary | ios::out);

    // If the file open fails, then ensure that it is within the program's work directory and has the proper permissions
    if (outFile)
    {

        for (Television &television : WRITE_ARR_TV)
            outFile << television;

        cout << "Done writing to " << inputOutputFile << endl;

        outFile.flush();
        outFile.close();
    }
    else
        cerr << "Failed to open file " << inputOutputFile << endl;

    cout << endl
         << endl;

    cout << "Testing read from file. The operator>>(ifstream& ... should be defined)" << endl;

    ifstream inFile(inputOutputFile, ios::binary | ios::in);

    Television READ_ARR_TV[SIZE];

    if (inFile)
    {

        for (Television &television : READ_ARR_TV)
            inFile >> television;

        inFile.close();

        cout << lineSeparator << endl
             << header << endl
             << lineSeparator << endl;

        for (Television television : READ_ARR_TV)
            cout << television << endl;

        cout << lineSeparator << endl;
    }
    else
        cerr << "Failed to open file " << inputOutputFile << endl;

    return 0;
}