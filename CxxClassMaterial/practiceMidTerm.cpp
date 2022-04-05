#include <iostream>
#include <string>

using namespace std;

// Midterm practice

// #1) A data type defines two major aspects about the data : float, double, integer, boolean.
// #2) An object is the fundamental to understanding OOP. An object has attributes and methods that are basically variables and function that belong to a class, o r”class member”. A class is described as the architecture of creating objects. In a class, there are encapsulation, Inheritance, and polymorphism	.
// #3) Data hiding os an OOP technique of hiding internal object details, such as data members. It guarantees restricted data access to class members.
// #4) A struct is different than a class because	 struct are value types whereas Classes are reference types. Struct are stored on a stack whereas classes are on a heap. Value types hold their value in memory where they are declared, but a reference type holds a reference to an object in memory.
// #5) —A— Describe the class’s constructor- this class has a default constructor which has no parameters ,no constructor.
// —B—Object composition string str, because they are a member of the class.
// —C—	Writetheincludeguardsfortheclass𝑯𝒆𝒍𝒑𝒆𝒓.
// #include “Helper.H”
// #ifndef HELPER_H //preprocessor directives that prevents reinitializing the same class
// #define HELPER_H
// class Helper(){
    //...
// }
// #endif

// #6) const int ISIZE= 10;
// 	string names[ISIZE];
//    	 double grades[ISIZE];
// #7) int myArray[5][6][7]
// Write the function header for the function printArr  to receive the array and print its contents

void printArray(int arr[][6][7], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            for (int k = 0; k < 6; ++k)
            {
                cout << "[" << i << "][" << j << "][" << k << "]" << arr[i][j][k] << endl;
            }
        }
    }
};

struct Point
{
    int x;
    int y;
};

struct Line
{
    Point startPoint;
    Point endPoint;
};

void shift(Point &point)
{
    point.x++;
    point.y++;
    cout << "x:" << point.x << " "
         << "y:" << point.y << endl;
}

void fun1(int *a)
{
    a++;
    *a = 5;
}
class Test
{
private:
    string *driver;
    double distance;
    int count;

public:
    Test(); // default constructor
    // Test(const string *driver, const double distance, const int count); // no default constructor to initialize all three members
    // // copy constructor
    // Test(const Test &obj);
    // ~Test();
    // Test(double distance, string *driver, int count);
    // double operator+(double distance);
    // int operator-();

    Test() : Test(NULL, 0, 0){}; //

    // class method definitions
    Test(const string *driver, const double distance, const int count)
    {
        this->driver = new string;
        *this->driver= *driver;
        this->count = count;
        this->distance = distance;
    }
    // copy constructor
    Test(const Test& obj)
    {
        this->count = obj.count;
        this->distance = obj.distance;
        this->driver = new string;
        *this->driver = *obj.driver;
         // copy the value;
    }
    // destructor to deallocate the dyamnic memory;
    ~Test()
    {
        delete driver;
    }
    // double, string, and int conversion constructors
    double distance1(double distance){};
    // Count (int count){}
    // Driver( string *driver){}
    // double, string, and int conversion operators

    // double distance(){
    //     return distance1();
    // }
    
    void Test :: setDriver(string *driver){
        *this->driver = *driver;

    }
    const string* Test :: getDriver() const{
        return driver;
    }
    // insertion operator to print all three values
    friend ostream &operator << (ostream &output, const Test &t){
        output << "TEST INSTANCE:" << t.distance<<  t.driver << t.count << endl;
        return output;
    }
    // extraction operator to extract all three values
    friend istream &operator >> (istream &input, Test &t){
        // t.driver = new string;
        input >> t.distance;
        input >> t.count;
        input >> *t.driver;
        return input;
    }
    // overloading operators
    double operator+(double distance)
    {
        this->distance += distance;
        return distance; //if this was a double it would return really depends on the question 
    }
    Test& operator--()
    {
        this->count--;
        return *this;
    }
    const string * getDriver();
};
int main()
{
    const int ISIZE = 210;
    int myArray[5][6][7] = {};

    printArray(myArray, ISIZE);

    Point p1;
    p1.x = 5;
    p1.y = 3;

    Point p2;
    p2.x = 10;
    p2.y = 15;

   

 Line first;
    first.startPoint.x = 5;
    first.endPoint.x = 10;
    first.startPoint.y = 3;
    first.endPoint.y = 15;
    shift(first.endPoint);
    shift(first.startPoint);

    // -------------------- q9
    int x[5] = {10, 11, 12, 13};
    fun1(x);
    cout << &x[2] << endl; // 0x16f1b33e8
    fun1(&x[2]);           // address of the subscript 2 and increments the pointer to be equal to five;
    cout << x[0] << " "
         << " " << x[1] << " " << x[2] << " " << x[3] << " " << x[4] << endl;
    // output -- 10  5 12 5 0 ?
    int *ptr = x;
    cout << x << endl;          // 0x16f1b33e0
    cout << ptr << endl;        // 0x16f1b33e0
    cout << *ptr << endl;       // 10
    cout << *ptr + 1 << endl;   // 11
    cout << *(ptr + 1) << endl; // 5

    *ptr += 2;
    cout << *ptr << endl; // 12

    ptr += 2;
    cout << *ptr << endl;   // 12
    cout << ptr[0] << endl; // 12

    Test test1[50];
    // Test test1;


    cout << "enter values for the instance of the array: " << endl;
    
    Test array[50];
    for (Test &test : array){
        cout << "enter values for the instance of the array: " << endl;
        string driver;
        cin >> driver;
        test.setDriver(&driver);
        cout << *test.getDriver() <<endl;
    }
    for (Test test : array)
        cout << *test.getDriver() <<endl;

    //create an instance using dyanmic memory 
    Test *test = new Test();
    //(*test).setDriver(&driver);
    // test->setDriver(&driver);

    //create an instance of type tEST
    Test test2;
    //test2.setDriver(&driver);

    delete test;
    
}
