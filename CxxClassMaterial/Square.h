#include <string>

using namespace std;

class Square
{
    // int length; // int is not a class, therefore this is not a composition.
    // string model; //since string is a  class, then model is the composition.
    // Square s;
    // Class variable are called instance variables.
    int length;
    string name;
public:
   Square(int l);
   void setLength(int l);
   const int getLength() const;
};