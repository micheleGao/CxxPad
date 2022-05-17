#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
// 1. Write a recursive function called 𝑟𝑒𝑐𝐶𝑜𝑝𝑦 to copy items from one array to the other.
// 2. Write an iterative function called 𝑖𝑡𝑒𝑟𝑅𝑒𝑣𝑃𝑟𝑖𝑛𝑡 to print an array in reverse order.
// 3. Write a recursive function called 𝑟𝑒𝑐𝑅𝑒𝑣𝑃𝑟𝑖𝑛𝑡 to print an array in reverse order.
// Output using provided test code:
// 100 200 300 400
// 100 200 300 400 0123456789 0123456789

void iterCopy(int from[], int to[], int size)
{
    for (int i = 0; i < size; ++i)
        to[i] = from[i];
}

void printArr(int arr[], int i)
{
    if (i >= 0)
    {
        printArr(arr, i - 1);
        cout << arr[i] << " ";
    }
}

void recCopy(int from[], int to[], int i)
{
    if (i > 0)
    {
        // *to = *from;
        to[i] = from[i];
        recCopy(from, to, i-1);
    }
}
void iterRevPrint(int arr[], int size)
{

    while(size >=0){
        cout << arr[size] << "" ;
        --size;
    }

}

void recRevPrint(int arr[], int size)
{
    if(size >=0){
        cout << arr[size] << "" ;
        recRevPrint(arr, size-1);
    }
}

int main()
{

    int from[] = {100, 200, 300, 400};
    int to[] = {-1, -1, -1, -1};

    recCopy(from, to, 3);

    printArr(from, 3);
    cout << endl;
    printArr(to, 3);
    cout << endl;

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    iterRevPrint(arr, 10);

    recRevPrint(arr, 9);

    return 0;
}