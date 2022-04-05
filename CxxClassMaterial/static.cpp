#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//Remember an instance memeber is present after instanciaton
//a static member is shared between all object--- ex. instances
//a static memeber is always available regardless to the existence of an instance 
//a static cannot acces instance memever --ex: non-static member
//an instance memeber can access static members
class Square{
    private:
        static int minLen;
        static int maxLen;
        int side;

    public:
        Square(int side){
            setSide(side);
        }
        static int getMinLen(){
            return minLen;
        }
        void setSide(const int side){
            if(side >= minLen && side <=maxLen)
                this->side =side;
        }
        int getSide(){
            return side;
        }
};

int Square :: minLen =0;
int Square ::maxLen =0;

int main () {
    Square ::getMinLen();
    Square s(10);
    s.getSide();
    //c++ convential rules of prog dont access the static member 
    // Square :: minLen =1;
}