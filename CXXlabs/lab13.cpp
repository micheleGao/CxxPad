#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

class ArrayDemo
{
private:
    int arr[10];
    int *ptrArr = arr;

public:
    ArrayDemo();
    void arrayAddress();
    void  arrayValue();
    // Overloading [] operator to access elements in array style
    // int& operator[](int index);
    void subscriptAddress(int index);
    void valueBySubscript(int s);
    void valueByArithmetic(int p);
};
ArrayDemo ::ArrayDemo()
{
    for(int i=1; i <10; i++){
        ptrArr[i]=pow(i,i);
        cout << ptrArr[i] << endl;
    }
}

void ArrayDemo ::arrayAddress()
{
    cout << "Memory address of array" << &arr << endl;
    cout << "Memory address of ptrArray:" << &ptrArr << endl;
}

void ArrayDemo ::arrayValue()
{
    cout << "Memory address of array" << arr << endl;
    cout << "Memory address of ptrArray:" << ptrArr << endl;
}

// int &ArrayDemo::operator[](int index)
// {
//     return ptrArr[index];
        
// }
void ArrayDemo ::subscriptAddress(int index){
    // int &p = ptrArr[index];
    // int &ptr = arr[index];
    cout << &ptrArr[index] << endl;
    cout << &arr[index] << endl;
    // return &ptr;
    // return &p;
}
void ArrayDemo::valueBySubscript(int s) 
{
    cout << arr[s] << endl;
    cout << ptrArr[s] << endl;
    // for (int i = 0; i < 10; i++){
    //     if(s == ptrArr[i])
    //     cout << "ptrArr[" << i << "]:" << s << endl;
    // }
    // for (int i = 0; i < 10; i++){
    //     // std :: cout <<"array " << i << ": "<< arr[i] << " " <<endl;
    //     if( s == arr[i])
    //     cout <<"arr[" << i << "]:" << s << endl;
    // }
}

void ArrayDemo :: valueByArithmetic(int p)
{
    
   cout << *(ptrArr + p)  << endl;
   cout << *(arr + p) << endl;
    //  for (int i = 0; i < 10; i++){
    //     // ptrArr ++ ;
    //     p = *ptrArr++;
    //     cout << "ptrArr[" << i << "]:" << p << endl;
    // }
}



int main()
{  

    //Test code from professor:
    ArrayDemo arrDemo;

    cout << "Call to arrayAddress(): " << endl;
    arrDemo.arrayAddress();

    cout << endl << "Call to arrayValue(): " << endl;
    arrDemo.arrayValue();

    cout << endl << "Call to subscriptAddress(): " << endl;
    arrDemo.subscriptAddress(2);
    arrDemo.subscriptAddress(3);
    arrDemo.subscriptAddress(4);

    cout << endl << "Call to valueBySubscript(): " << endl;
    arrDemo.valueBySubscript(2);
    arrDemo.valueBySubscript(3);
    arrDemo.valueBySubscript(4);

    cout << endl << "Call to valueByArithmetic(): " << endl;
    arrDemo.valueByArithmetic(2);
    arrDemo.valueByArithmetic(3);
    arrDemo.valueByArithmetic(4);

    // cout << array.subscriptAddress(2)<<endl;
    // cout << array.subscriptAddress(3)<<endl;

    //==================Stratch pad================================;

    // int arr[] = { 3, 5, 6, 7, 9 };
    // int *p = arr;
    // int (*ptr)[5] = &arr;


    // cout << "p = "<< p <<", ptr = " << ptr << endl;
    // cout << "*p = "<< *p <<", *ptr = " << *ptr << endl;
    // cout << "*ptr doubled =" << pow(*p, 2) << endl;
    // cout << "sizeof(p) = "<< sizeof(p) <<
    //         ", sizeof(*p) = " << sizeof(*p) << endl;
    // cout << "sizeof(ptr) = "<< sizeof(ptr) <<
    //     ", sizeof(*ptr) = " << sizeof(*ptr) << endl;
    return 0;
}





