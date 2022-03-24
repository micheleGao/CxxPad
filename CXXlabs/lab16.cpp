// I. Create class Room with the following PUBLIC members, use in-line function definitions for this lab.
// 1. name, of type String pointer
// 2. floor, of type int pointer
// 3. non-default constructor to initialize all members using NON-POINTER parameters
// 4. destructor to deallocate dynamic memory
// II. Add a main() to perform the following:
// 1. Create an instance of type Room on the stack. Initialize name and id
// 2. Create a dynamic instance of type Room. Initialize name and id
// 3. Print the values of name and floor from both instances


#include <iostream>
#include<string>

using namespace std;

class Room {
    public: 
        string *name;
        int *floor;
        Room( string name, int floor );
        ~Room();
};
Room :: Room(string name, int floor){
    this->name = new string;
    this->floor = new int;
    *this-> name = name;
    *this->floor = floor;
}
Room :: ~Room(){
    delete name;
    delete floor;
}

int main(){
    Room room("hello", 8);
    cout << *room.name << *room.floor << endl;

    Room *room2 = new Room("goodbye", 10);
    cout << *room2->name << *room2->floor <<endl;

    delete room2;

}