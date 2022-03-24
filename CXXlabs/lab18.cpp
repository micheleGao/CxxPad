#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){

    //write a program:
    //1. prompt the user to enter a file to copy
    //2.prompt the user to enter a destination file to copy to
    //3. copy all  data from the first file to destination file 
    
    //prompt for the source file
    string sourceFileName;
    cout <<"Enter the file to copy from: " ;
    cin >> sourceFileName;
    ifstream inFile(sourceFileName, ios:: in);
    if(inFile){
        //2.
        string destFileName;
        cout <<" Enter the destination file: ";
        cin >> destFileName;

        ofstream outFile(destFileName, ios::out);
        if (outFile){
            //3. 
            // while (!inFile.fail()){
            //     string line;
            //     // inFile >>line;
            //     // getline(inFile, line);
            //     // outFile <<line;
            //     char ch = inFile.get();
            //     outFile.put(ch);
            // }
            while (true){
                string line;
                // inFile >>line;
                // getline(inFile, line);
                // outFile <<line;
                char ch = inFile.get();
                if (inFile.fail())
                    break;
                else 
                    outFile.put(ch);
            }

            outFile.flush();
            outFile.close();

            cout <<"File copied succesfully" <<endl;

        }else
            cout << "Cannot open destination file:" << destFileName <<endl;
        inFile.close();
    }else
        cout <<"Cannot open file: " << sourceFileName << endl;
    
}