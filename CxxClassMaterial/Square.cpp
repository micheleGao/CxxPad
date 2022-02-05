#include "Square.h"

Square :: Square(int l){
    name = "";
    length = l;
}
void Square:: setLength( int l){
    length = l ;
}
const int Square :: getLength() const{
    return length;
}