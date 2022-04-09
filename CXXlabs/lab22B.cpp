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
    Item& operator++(); //pre
    Item& operator--(); //pre
    friend Item operator++(Item& Item, int i); // post
    friend Item operator--(Item& Item,int i);//post
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

// Item& Item :: operator++( int i)
// {
//     *this->id += i;
//     return *this; // if this was a double it would return really depends on the question
// }
Item& Item :: operator++(){
    return *this;
}
// Item& Item :: operator--(int i){
//     *this->id -= i;
//     return *this;
// }

Item& Item :: operator--(){
    return *this;
}

Item operator--(Item& Item, int i){
  Item.id -=i;
  return i;
}
Item operator++(Item& Item, int i){
 Item.id +=i;
    return i;
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
//   item3 + 6;
  cout << item3.getId() << endl;

  //part III

  cout << "Part III" << endl;
   Item item4(100);

  cout << (++item4).getId() << endl;
  cout << (--item4).getId() << endl;
  cout << (item4++).getId() << endl;
  cout << (item4--).getId() << endl;

  return 0;
}
