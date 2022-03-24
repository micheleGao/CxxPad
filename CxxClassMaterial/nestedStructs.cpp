#include <iostream>
#include <string>

using namespace std;
struct Address //structure tag
{
    int houseNum;
    char area[26];
    char street[20];
    char city[26];
    char state[26];
};
struct Employee
{
    int employeeNum;
    char name[26];
    char desig[16];
    Address address;
    float basic;
};
Employee Worker; // create structure variable



int main(){
       Employee evar;

   cout<<"Employee No: ";
   cin>>evar.employeeNum;
   cout<<"Employee Name: ";
   gets(evar.name);
   cout<<"Designation: ";
   gets(evar.desig);
   cout<<"House No: ";
   cin>>evar.address.houseNum;
   cout<<"Street: ";
   gets(evar.address.street);
   cout<<"City: ";
   gets(evar.address.city);
   cout<<"State: ";
   gets(evar.address.state);
   cout<<"Basic Pay: ";
   cin>>evar.basic;
   cout<<"\n";

   char ch;
   cout<<"Want to see ? (y/n)...";
   cin>>ch;
   if(ch=='y' || ch=='Y')
   {
      cout<<"\nEmployee Data:\n";
      cout<<"Employee No: "<<evar.employeeNum;
      cout<<"\nName: "<<evar.name;
      cout<<"\nDesignation: "<<evar.desig;
      cout<<"\nAddress: "<<evar.address.houseNum<<", ";
      cout<<evar.address.street<<", ";
      cout<<evar.address.city<<", ";
      cout<<evar.address.state<<endl;
      cout<<"Basic Pay: "<<evar.basic;
      cout<<"\n";
   }

//    getch();
     
}