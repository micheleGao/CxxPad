#include <iostream>
#include <string>

using namespace std;

class Item{
    private:
        double price;
    public:
        Item();
        operator double();
        Item(double p);

};
Item:: Item(){
    price =-1;
}
Item ::operator double(){
    return price;
}

Item :: Item(double p){
    price = p;
}


int main(){
    Item item1;

    double d = item1;

    cout << d << endl;

    Item item2(200.1);

    cout << ((double) item2) << endl;

    return 0;
}
