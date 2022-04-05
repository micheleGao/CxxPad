#include <iostream>
#include <string>

using namespace std;
class Item
{
private:
    int *id;

public:
    Item();
    Item(int id);
    ~Item();
    Item(const Item &obj);
    int getId() const;
    Item& operator=(const Item &other);
    Item& operator+(int i);
};

Item ::Item(int id)
{
    this->id = new int;
    *this->id = id;
}
Item::~Item()
{
    cout << "~Item" << endl;
}
Item ::Item(const Item &obj)
{
    this->id = new int;
    *this->id = *obj.id;
}
int Item ::getId() const 
{
    return *this->id;
}
Item& Item :: operator=(const Item &other)
{
    *this->id = *other.id;
    return *this;
}

Item& Item :: operator+( int i)
{
    *this->id += i;
    return *this; // if this was a double it would return really depends on the question
}

int main()
{
    // Part I
  {
    Item item1(20);
    Item item2(item1);
    cout << "Part I" << endl;
    cout << item1.getId() << endl;
    cout << item2.getId() << endl;
  }
  // Part II
  cout << "Part II" << endl;
  Item item1(50);
  Item item3 = item1;
  item3 + 6;
  cout << item3.getId() << endl;
}
