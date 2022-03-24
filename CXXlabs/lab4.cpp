#include <iostream>
#include <string>

using namespace std;

struct PersonInfo{
    char name[26];
    char address[26];
    char city[26];
};
struct Student{
    int studentId;
    PersonInfo info;
    short year;
    double gpa;
};
// Student stu;

int main(){
    PersonInfo person;
    cout << "Name: " << endl;
    cin >> person.name;
    cout << "Address: " << endl;
    cin >> person.address;
    cout << "City: " << endl;
    cin >> person.city;

    Student student;
    cout << "Student Id : " << endl;
    cin >> student.studentId;
    cout << "GPA: " << endl;
    cin >> student.gpa;
    cout << "Name: " << endl;
    cin >> student.info.name;
    cout << "Address: " << endl;
    cin >> student.info.address;
    cout << "City: " << endl;
    cin >> student.info.city;

    cout << "Name: " << person.name << endl;
    cout << "Address: " << person.address << endl;
    cout << "City: " << person.city << endl;


    cout << "Student Id: " << student.studentId << endl;
    cout << "GPA:" << student.gpa << endl;
    cout << "Year: " << student.year << endl;
    cout << "Name: " << student.info.name << endl;
    cout << "Address: " <<student.info.address << endl;
    cout << "City: " << student.info.city << endl;





}

