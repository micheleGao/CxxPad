#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string messageToWrite = "Hello, how are you";
    // write to a binary file. Remember to write the # of characters as well
    ofstream outFile("Message.bin", ios::binary);
    int len = messageToWrite.length();
    outFile.write(reinterpret_cast<char*>(&len), sizeof(len));
    outFile.write(reinterpret_cast<char*>(&messageToWrite[0]), len);

    outFile.flush();
    outFile.close();
        // read from the text file into a new string. Remember to read the # of characters and resize the string
    string messageRead;
    ifstream inFile("Message.bin", ios::binary);
    int messRead;
    inFile.read(reinterpret_cast<char*>(&messRead), sizeof(messRead));
    messageRead.resize(messRead);
    inFile.read(reinterpret_cast<char*>(&messageRead[0]), messRead);

    inFile.close();
    cout << messageRead << endl; 

    return 0;
    
}