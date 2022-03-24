#include <iostream>
#include <string>
#include <cmath>
#include <numeric>

using namespace std;
int main()
{
    const int ISIZE = 5;
    string names[ISIZE];
    double grades[ISIZE];
    int sum = 0;
    int highest = 0;
    int lowest = 0;
    float below = 0;

    // prompt the user to enter names
    for (int i = 0; i < ISIZE; ++i)
    {
        cout << "Enter name :" << i << ":" << endl;
        cin >> names[i];
        cout << "Enter grade:" << i << ":" << endl;
        cin >> grades[i];
    }
    //creating a loop to iterate through the array tp get the name and grades by their index

    for (int i = 0; i < ISIZE; ++i)
    {
        cout << "names [" << i << "] = " << names[i] << " has "
             << "grades [" << i << "] = " << grades[i] << ":" << endl;
    }
    // creating a loop to iterate through the array of grades and storing the highest to thr count 
    for (int count = 1; count < ISIZE; count++) 
    {
        if (grades[count] > grades[highest])
            highest = count;
    }
    cout << "\nThe MAX is " << grades[highest] << " and belongs to: " << names[highest] << endl;

    //finding the min grades and who it belongs to:
    for (int count = 1; count < ISIZE; count++) 
    {
        if (grades[count] < grades[lowest])
           lowest= count;
    }
     cout << "\n The MIN is " << grades[lowest] << " and belongs to: " << names[lowest] << endl;
    
    //figured I can use accumulate since I never used it before:
    sum = accumulate(grades, grades + ISIZE, sum);
    cout << "\n The grades sum is " << sum << endl;
    
    //the math for the average
    float average = (float)sum / (float)5.0;
    cout << "\n Average grades is :  " << average << endl;
    
    //finding the below average grade:
    for (int i=1; i < ISIZE; i++) 
    {
        if(grades[i] > average ){
            below = ((float)grades[i]/5);
        }
        
    }
     cout << "\nThe below average grades is: " << below << endl;




}
