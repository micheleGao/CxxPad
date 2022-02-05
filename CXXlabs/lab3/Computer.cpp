#include "Computer.h"

Computer::Computer(){
    year = -1;
    model = "";
    purpose ="";
}
void Computer::setSome(int y, string m, string p){
    year = y;
    model = m;
    p = "";
}
void Computer::setYear( int y){
    year = y;
}
Computer :: ~Computer()
{
   cout << "Removed from memory" << endl;
}