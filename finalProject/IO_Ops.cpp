/*
 * IO_Ops.cpp
 */

#include "IO_Ops.h"
#include "Rectangle.h"

// Writes a Rectangle to the end of the file indicated by the parameter filename
// Write id, name, width, then height. Separate each entry by a tab (i.e., \t)
// Writing is in text format
// If the write fails, return false. If write succeeds return true
bool IO_Ops::appendRectangleToFile(const Rectangle *rectangle, const string filename)
{
    // fstream f;
    ofstream fout;
    // ifstream fin;
    // fin.open(filename);
    fout.open(filename, ios::app);
    if (fout.is_open())
    {
        fout << rectangle->getId() << "\t" << rectangle->getName() << "\t" << rectangle->getWidth() << "\t" << rectangle->getHeight()
             << endl;
        cout << "Data has been appended to file" << endl;
        fout.close();
        return true;
    }
    else
    {
        cout << "unsuccessful!" << endl;
        return false;
    }
}

// Reads and returns a Rectangle entry from the file indicated by the parameter filename
// Read id, name, width, then height.
// Reading is in text format
// If read succeeds construct and return a Rectangle pointer. If read fails, return NULL
Rectangle *IO_Ops::readRectangleFromFile(const string filename, const int lineNumber)
{

    ifstream my_file;
    my_file.open(filename, ios::in);
    if (!my_file)
    {
        cout << "No such file";
    }
    else
    {
        long id;
        string name;
        double width;
        double height;
        for (int i = 0; i < lineNumber; i++)
        {
            my_file >> id >> name >> width >> height;
        }
        my_file.close();
        return new Rectangle(width, height, id, name);
    }
    return NULL;
}