#include <iostream>
#include <string>
#include <ostream>
#include <istream>

using namespace std;

// 1. Create class Person:
//    * private member called name and type string
//    * public non-default constructor to initialize name
//    * overload the output stream operator to print the value of name

class Person{
    private:
        string name;
    public:
        Person();
        Person(string name){
            this->name = name;
        }
        friend ostream & operator  <<(ostream& out, Person& person);
};
ostream & operator <<(ostream& out, Person& person){
    out << person.name <<endl;
    return out;
}

// 2. Create class Student which publicly inherits from Person:
//    * private member called id and type int
//    * public non-default constructor to initialize id AND name
//    * overload the output stream operator to print the value of name followed by the value of id. Note that since name is private in Person, therefore you will need to invoke the parent's output stream operator. Hint: cast the parameter from Student to Person like this ((Person&) student)  

class Student : public Person{
    private: 
        int id;
    public:
        Student();
        Student(int id,string name):Person(name){
            this->id = id;
        }
        friend ostream & operator << (ostream& out, Student& student);
};
ostream & operator << (ostream& out, Student& student){
    out << ((Person&)student);
    out << student.id;
    return out;
}

// 3. The output of the below main() is:
//     person's name
//     student's name 123

int main() {
    Person person("person's name");
    cout << person << endl;
    Student student(123, "student's name");
    cout << student << endl;
    return 0;
}