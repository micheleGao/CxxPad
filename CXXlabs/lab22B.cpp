#include <iostream>
#include <string>

using namespace std;
class Item
{
private:
    int *id;

public:
    // Item();
    Item(){*this->id = 0; }
    Item(int id);
    ~Item();
    Item(const Item &obj);
    int getId() const;
    int x() { return *this->id; }
    Item& operator=(const Item &other);
    Item& operator++(); //prefix
    Item& operator--(); //prefix
    friend Item operator++(Item&i, int); // post
    friend Item operator--(Item&i, int);//post
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
    ++*this->id;
    return  *this; //100
}

Item& Item :: operator--(){
    --*this->id;
    return *this; //100
}

Item operator--(Item& i, int )
{   
    i.id--;
    return i;
    
}


Item operator++(Item& i, int )
{
    i.id++;
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

  cout <<" this is item ++" << (++item4).getId() << endl;
  cout << " this is item --" << (--item4).getId() << endl;
  cout << " this is item ++ "<<(item4++).getId() << endl; // im getting zero for this.
  cout << " this is item --" <<(item4--).getId() << endl;
  cout << item4.getId() << endl;
 
  return 0;
}
