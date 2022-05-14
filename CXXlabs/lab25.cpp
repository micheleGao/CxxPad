#include <iostream>
#include <string>
#include <ostream>
#include <istream>

using namespace std;
class Item
{
private:
    int *id;

public:
    Item() { *id = 0; };
    Item(int id);
    ~Item();
    Item(const Item &obj);
    int getId() const;
    Item &operator=(const Item &other);
    bool operator==(const Item &other);
    bool operator<(const Item &other);
    bool operator>(const Item &other);
    Item &operator++();                   // pre
    Item &operator--();                   // pre
    friend Item operator++(Item &i, int); // post
    friend Item operator--(Item &i, int); // post
    friend ostream &operator<<(ostream &output, const Item &other);
    friend istream &operator>>(istream &input, const Item &other);
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
Item &Item ::operator=(const Item &other)
{
    *this->id = *other.id;
    return *this;
}

// part IV;

bool Item ::operator==(const Item &other)
{
    if (*this->id == *other.id)
        return true;
    else
        return false;
}

bool Item ::operator<(const Item &other)
{
    if (*this->id < *other.id)
        return true;
    else
        return false;
}
bool Item ::operator>(const Item &other)
{
    if (*this->id > *other.id)
    {
        return true;
    }
    else
        return false;
}

Item &Item ::operator++()
{
    ++*this->id;
    cout <<  ++*this->id;
    return *this;
}

Item &Item ::operator--()
{
    --*this->id;
    return *this;
}

Item operator--(Item &i, int)
{
    --i.id;
    cout << *i.id;
    return i;
}
Item operator++(Item &i, int)
{
    ++i.id;
    cout << *++i.id;
    return i;
}

ostream &operator<<(ostream &output, const Item &other)
{

    output << *other.id;
    return output;
}
istream &operator>>(istream &input, const Item &other)
{
    input >> *other.id;
    return input;
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

    // part III

    cout << "Part III" << endl;
    Item item4(100);

    cout << " this is item ++" << (++item4).getId() << endl;
    cout << " this is item --" << (--item4).getId() << endl;
    cout << " this is item ++ " << (item4++).getId() << endl;
    cout << " this is item --" << (item4--).getId() << endl;

    // part IV

    cout << "Part IV" << endl;

    Item item5(100);
    Item item6(100);
    Item item7(99);

    cout << (item5 == item6 ? "true" : "false") << endl;
    cout << (item5 > item6 ? "true" : "false") << endl;
    cout << (item6 > item7 ? "true" : "false") << endl;
    cout << (item7 < item6 ? "true" : "false") << endl;

    Item item8(100);

    cout << "Enter a new ID: ";
    cin >> item8;

    cout << item8 << endl;

    return 0;
}
