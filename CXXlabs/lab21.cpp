#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream data("grades.csv", ios::in | ios::out);
        double grade;
        double min = grade;
        double max = grade;
        double sum = grade;
        int count =1;

        
    if(data.is_open()){
        cout << "file was opened succesfully!" << endl;
        string str;
        getline(data, str);
        double grade;
        while(!data.fail())
        {
            data.seekg(7, ios::cur);
            data >> grade; //relative to the current position
            cout << grade << endl;
            count ++;
            sum += grade;
            if (min > max )
            {
                max =grade;
            }
            if(max <grade)
            {
                min =grade;
            }
        }
        data.close();
    }else
        cerr << " Error: File Not Found" << endl;

        ///write to file 
        ofstream outFile("Result.txt");
        if (outFile){
            outFile << fixed << setprecision(2) << setfill('@');
            outFile<< setw(10) << "Sum:" << sum << endl;
            outFile<< setw(10) << "count:" << count << endl;
            outFile<< setw(10) << "min:" << min << endl;
            outFile<< setw(10) << "max:" << max << endl;
            outFile<< setw(10) << "avg:" << (sum/count) << endl;

            outFile.flush();
            outFile.close();
        }else
            cerr << " Error: File Not Found" << endl;
}