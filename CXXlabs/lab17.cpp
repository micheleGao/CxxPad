#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
// #include <ostringstream>

using namespace std;

int main()
{
    //i used setw (30), but it didnt look very neat so i added a few more lines for it- setw(36);
    const int ISIZE = 5;
    const string firstNames[] = {"Clara", "Margaret", "Minnie", "Elizabeth", "Anna"};
    const string lastNames[] = {"Duran", "Ortiz", "Gardner", "Pacheco", "Sutton"};
    const double heights[] = {6.0541424, 5.2735864, 3.2332212, 6.2625385, 3.2231290};
    // format and print arrays
    ostringstream memFormat;
    memFormat << setfill('-') << setw(36) << fixed << " \n"
              << endl;
    cout << memFormat.str();


    //TRYING TO CREATE A TABLE WITH DIVIDERS.
    // ostringstream dividerFormat;
    // dividerFormat << setfill('|') << setw(1) << fixed << "\n" << endl;
    // cout << dividerFormat.str();
    

    cout << setw(11) << "first" << setw(11) << "last" << setw(11) << "height" << endl;
    for (int i = 0; i < 5; i++)
    {
        ostringstream memFormat;
        memFormat << setfill('-') << setw(36) << fixed << " \n"
                  << endl;
        cout << memFormat.str();
        // cout << setw(11) << firstNames[i] << setw(11) << lastNames[i] << setw(11) << setprecision(2) << heights[i] << endl;
        cout << setw(11) << firstNames[i] << setw(11) << lastNames[i]<< setw(11) << setprecision(2) << fixed << heights[i]<< endl;
    }
    cout << setw(11) << memFormat.str();

    return 0;
}