#include <iostream>

using namespace std;

//const int MON =0;
//const int TUES =1;.. and so forth, enum is enumerating them for us

enum Weekdays{
    SUN, MON, TUES, WED, THURS, FRIDAY, SAT
};

// enum class Weekdays{
//     SUN, MON, TUES, WED, THURS, FRIDAY, SAT
// };

int main(){
    // Weekdays days = static_cast<Weekdays>(100);
    // int x = days;
    // cout << days << endl;
    // return 0;

   Weekdays days = static_cast<Weekdays>(1);

//    if (days == Weekdays::SUN)
//     cout << "Mon";

    if (days == MON)
    cout << "Sunday"<< endl;
    else(cout <<"nope" << endl);



}

