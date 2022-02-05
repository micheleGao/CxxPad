#include <iostream>
#include <string>
using namespace std;

class Computer{
    private:
        int year;
        string model;
        string purpose;
    public:
        Computer();
        void setYear(int y);
        void setSome(int y, string m, string p);
        ~Computer();

};