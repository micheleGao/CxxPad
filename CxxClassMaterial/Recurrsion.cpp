#include <iostream>
#include <string>
#include <fstream>
#include<algorithm>

using namespace std;
int sumArr(int arr[], int size, int idx){
    if(idx == size-1) return arr[idx];
    return arr[idx] +sumArr(arr, size, idx +1);
}
int sumArr2(int arr[], int size, int idx, int &sum){
    if(idx <= size-1)
    {
        sum +=arr[idx];
        sumArr2(arr, size, idx +1, sum);
    }
}

int main(){
    int arr[] = {50, 38, 5, 37, 4, 49, 28, 38, 19, 31, 35, 48};
    cout << sumArr(arr, 12, 0) << endl;
}