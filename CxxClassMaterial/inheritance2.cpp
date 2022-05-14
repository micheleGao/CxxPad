#include <iostream>
#include <string>
#include <ostream>
#include <istream>

using namespace std;

class Person{
    private:
        string name;
    public:
        Person();
        Person(string name){
            this->name = name;
        }
        virtual string getName(){
            return name;
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
        string getName() override final{
            return Person ::getName() +"->Student";
        }
        friend ostream & operator << (ostream& out, Student& student);
};
ostream & operator << (ostream& out, Student& student){
    out << ((Person&)student);
    out << student.id;
    return out;
}

class Faculty : public Person{
    private:
    public:
    Faculty(string name) : Person(name){

    }
    virtual string getName(){
       return Person:: getName()+"->faculty";
    }
    virtual int nonOverrideableMethod() final{
        return -999;
    }
};

// 3. The output of the below main() is:
//     person's name
//     student's name 123

int main() {
    // Person person("person's name");
    // cout << person << endl;
    // Student student(123, "student's name");
    // cout << student << endl;
    // return 0;
    // Person * person = new Student(123, "name");//= new Person(persons name);
    Person * person[]= { new Person ("Person"), new Student(123, "name"),  new Faculty("Faculty")};
    for(Person* p: person){
        cout << p->getName() << endl;
    }
    cout<< ((Student*)person[1])->getName() <<endl;

}