#include <iostream>
#include <string>

using namespace std;

int fib(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int binSearch(int arr[], int start, int end, int searchFor)
{
    while (end >= start)
    {
        int mid = start + (end - start) / 2;
        if (searchFor == arr[mid])
            return mid;
        if (searchFor < arr[mid])
            end = mid - 1;
        else if (searchFor > arr[mid])
            start = mid + 1;
    }
    return -1;
}
int binSearchRe(int arr[], int start, int end, int searchFor)
{
    if (end < start)
        return 1;
    int mid = start + (end - start) / 2;
    if (searchFor == arr[mid])
        return mid;
    if (searchFor < arr[mid])
        return binSearchRe(arr, start, mid-1, searchFor);
    else if (searchFor > arr[mid])
        return binSearchRe(arr, mid+1, end,  searchFor);
        
}

int main()
{
    cout << fib(5) << endl;
}