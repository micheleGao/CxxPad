#include <iostream>
#include <string>
#include <ostream>
#include <istream>

using namespace std;

class Animal{
    private: 
        string name;
    public:
        Animal();
        Animal(string name){
            this->name = name;
        }
        virtual ~Animal(){
            cout << "Animal cleanup" <<endl;
        }
        virtual void move(){
            cout << "Animal :: move" <<endl;
        }
};
class Cat : public Animal{
    public:
        Cat();
        Cat(string name): Animal(name){}
        virtual ~Cat(){
            cout <<"Cat cleanup" << endl;
        }
        virtual void move(){
            cout << "Cat::move" << endl;
        }
};

class Frog : public Animal{
    public:
        Frog(string name): Animal(name){}
        virtual ~Frog(){
            cout << "Frogcleanup" <<endl;
        }
        virtual void move(){
            cout << "Frog::move" <<endl;
        }

};
int main() {
    Animal *animals[] = { new Cat("cat1"), new Cat("cat2"), new Frog("frog1") };
    for (Animal *&a : animals)
        a->move();
    cout << endl;
    for (Animal *&a : animals)
        delete a;
    return 0;
}