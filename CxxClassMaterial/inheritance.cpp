#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class Parent{
    double id;
    // private:
    //     int x;
    // protected:
    //     int y;
    // public:
    //     int z;
    // Parent(int x, int y, int z){
    //     this->x = x;
    //     this->y = y;
    //     this->z = z;
    // }
    public:
    Parent(){
        cout <<"Parent::Parent()" << endl;
    }
    ~Parent(){
        cout <<"Parent::~Parent()" << endl;
    }
    void m1(){
        cout << "Parent:: m1()" << endl;
    }
    // void m1(int x){
    //     cout<< "b"<< endl;
    // }
    // void m1(){
    //     cout<< "b"<< endl;
    // }
    string getName(){
            //return Parent::getName()+"->child";
            return "Parent";
    }
    friend ostream & operator <<(ostream& out, Parent& parent);
    friend istream& operator >>(istream & in, Parent& parent);
};
class Child : public Parent{
    float age;
    // private:
    //     int a;
    // protected:
    //     int b;
    // public: 
    //     int c;
    //     Child(int x, int y, int z,int a, int b, int c):Parent(x, y, z){
    //         this->a =0;
    //         this->b= 1;
    //         this->c =2;
    //         // a = b = c =10; // ok these are all members of child
    //         // y = z = 11; //ok since y has a protected access and z is public
    //         //x=0; //not okat, x is private;
    //     }
    public:
        string getName(){
            return Parent::getName()+"->child";
            // return ((Parent*)this).getName() + "->child";
            // return Parent* this->getName() + "->child";
        }
        Child() : Parent(){
            cout << "Child::Child()" << endl;
        }
        ~Child(){
             cout << "Child::~Child()" << endl;
        }
        friend istream & operator >> (istream &in, Child& child);
        friend ostream& operator << (ostream & out, Child& child);


};

ostream & operator  <<(ostream& out, Parent& parent){
    out << parent.id <<endl;
    return out;
}
istream& operator >>(istream& in, Parent &parent){
    in >> parent.id;
    return in;
}
ostream& operator << (ostream & out, Child& child){
    out << ((Parent&)child);
    out << child.age;
    return out;
}
istream & operator >> (istream &in, Child& child){
    in >> ((Parent&)child);
    in >> child.age;
    return in;
}

// class Grandchild : public Parent{

// };

int main(){
    // Parent parent;
    // Child child;
    
    // //parent.x = 1; Not okay since x is private;
    // //parent.y =2; Not okay  bc y is protected;
    // parent.z = 3; //ok
    // //child.a =1; not okay since a is private
    // //child.b=1// not okay since its protected;
    // child.c =1; //ok it is public
    // //child.x=1 not okay since its is private
    // //child.y=1; not okay since its protected;
    // //child.z=1; not okay since it is private;
    Child child;
    cout <<"Enter id and age"<<endl;
    cin>>child;
    cout << child <<endl;
    return 0;

}