#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

class Student
{
private:
    string name;
    float grade;

public:
    Student();
    void Student1();
    void setName(string n);
    void setGrade(float g);
    // string setName(string n);
    // float setGrade(float g);
    // string getName();
    float const getGrade();
    string const getName();
    // void getGrade();
    void getAll();
    // void getMax(float arr[]);
    ~Student();
};

Student ::Student()
{
    string name = "";
    float grade = -1;
}
void Student ::setName(string n)
{
    name = n;
}
void Student ::setGrade(float g)
{
    grade = g;
}


string const Student :: getName()
{
    return name;
}


float const Student ::  getGrade()
{
    return grade;
}


void Student ::getAll()
{
    cout << "NAME: " << name << endl;
    cout << "GRADE: " << grade << endl;
}

Student ::~Student()
{
    cout << "negative commander" << endl;
}

const int ISIZE =5;
void getMax(Student arr[], const int ISIZE){
   int  highest = 0;
   float max = arr[0].getGrade();
    for (int count = 1; count < ISIZE; count++) 
    {
        if (arr[count].getGrade() >  arr[highest].getGrade()){

            highest = count;
        }
    }
    cout << "\nThe MAX is " << arr[highest].getGrade() << " and belongs to: " << arr[highest].getName() << endl;
}

void getAverage(Student arr[], const int ISIZE){
    float sum = 0;
    for (int count = 0; count < ISIZE; count++) {
        sum += arr[count].getGrade();
    }
       cout << "\n The grades sum is " << sum << endl;
    
    //the math for the average
    float average = (float)sum / (float)5.0;
    cout << "\n Average grades is :  " << average << endl;
    
    //finding the below average grade:
    for (int i=1; i < ISIZE; i++) 
    {   float below;
        if(arr[i].getGrade() > average ){
            below = ((float)arr[i].getGrade()/5);
            cout << "\nThe below average grades is: " << below << endl;
        }
        
    }
}





int main()
{
    Student hello;
    hello.setGrade(99.99);
    hello.setName("Michele");
    // hello.getAll();
    cout << hello.getGrade();
    cout << hello.getName();

    // array<float, 5> arr;
    // array<string, 5> names;
    // arr.fill(1);
    Student arr[5];
    cout << "enter names: " << endl;
    string promptName;
    float promptGrade;
    for (int i = 0; i < 5; i++)
    {
        cin >> promptName;
        arr[i].setName(promptName);
    }
    cout << "enter grades: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> promptGrade;
        arr[i].setGrade(promptGrade);
    }

    for (int  i=0; i<5; i++)
    {
        cout <<"grades:"<< arr[i].getGrade()<< " " << " , " << "names :" << arr[i].getName() << endl;
    }

    getMax(arr, ISIZE);
    getAverage(arr, ISIZE);

    
}
