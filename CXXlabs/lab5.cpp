#include <iostream>

using namespace std;

enum class Employee
{
    STAFF = 100,
    SECRETARY = 200,
    MANAGER = 300,
    CEO = 400
};
int main()
{

    Employee emp1 = static_cast<Employee>(300);

    int userInput{};

    cout << "Enter a value (100, 200, 300, 400):" << endl;
    cin >> userInput;

    Employee employee{ static_cast<Employee>(userInput)}; // static_cast our integer 

    switch (Employee employee{ static_cast<Employee>(userInput)})
    {
    case Employee ::STAFF:
        cout << "staff" << endl;
        break;
    case Employee ::SECRETARY:
        cout << "Secretary" << endl;
        break;
    case Employee ::MANAGER:
        cout << "Manager" << endl;
        break;
    case Employee ::CEO:
        cout << "CEO" << endl;
        break;
    default:
        cout << "You made an illegal choice." << endl;
    }
    return 0;

}