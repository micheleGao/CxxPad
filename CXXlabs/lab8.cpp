#include <iostream>
#include <string>
#include <cmath>
#include <numeric>

using namespace std;

void sumArr(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the array is: " << sum << endl;
}
void fillArr(int arr[])
{
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << endl;
    };
};

void maxArr(int arr[])
{
    int max = arr[0];

    for (int j = 0; j < 10; ++j)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    cout << "The max: " << max << endl;
}

void copyArr(int arr[], int copy[])
{   

    for(int i=0; i <10; i++){
        copy[i] = arr[i];
        cout << copy[i] << endl;
    }

}

int main()
{
    int y[10]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int ISIZE = 10;
    int values[ISIZE];
    for (int i = 0; i < ISIZE; ++i)
    {
        cout << "Enter value :" << i << ":" << endl;
        cin >> values[i];
    }
    fillArr(values);
    sumArr(values);
    maxArr(values);
    copyArr(y, values);

    return 0;

}