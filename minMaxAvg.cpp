#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
//1 2 3 4 5 6 7 8 9 10
int main()
{

    int sum = 0;
    int minVal = INT32_MAX;
    int maxVal = INT32_MIN;
    int input;


    for (int i = 0; i < 10; i++)
    {
        cout << "Enter your number : \n ";
        cin >> input;

        if (i == 0)
        {
            minVal = input;
            maxVal = input;
            sum = input;
        }
        else
        {
            minVal = min(input, minVal);
            maxVal = max(input, maxVal);
            sum += input;
        }

    }
        cout << "Max : " << maxVal << '\n'
             << endl;
        cout << "Min : " << minVal << '\n'
             << endl;
        cout << "Average" << (sum / 10.0) << endl;
}