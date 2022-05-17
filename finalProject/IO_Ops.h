// *************************************************************************
// ****************************** Read Only! *******************************
// ************************ Do not modify this file ************************
// *************************************************************************

//============================================================================
// Input/Output Operations header file
// Author      : Ayman Zeidan
//               CUNY, BMCC, CIS
//============================================================================

#ifndef IO_OPS_H_
#define IO_OPS_H_

#include <fstream>
#include "Rectangle.h"

using namespace std;

class IO_Ops {
  private:
    // Making the constructor private disallows instantiation since all functions are static
    IO_Ops() {
    }
  public:
    // Writes a Rectangle to the end of the file indicated by the parameter filename
    // Write id, name, width, then height. Separate each entry by a tab (i.e., \t)
    // Writing is in text format
    // If the write fails, return false. If write succeeds return true
    static bool appendRectangleToFile(const Rectangle *rectangle, const string filename);

    // Reads and returns a Rectangle entry from the file indicated by the parameter filename
    // Read id, name, width, then height.
    // Reading is in text format
    // If read succeeds construct and return a Rectangle pointer. If read fails, return NULL
    static Rectangle* readRectangleFromFile(const string filename, const int lineNumber);
};

#endif /* IO_OPS_H_ */
