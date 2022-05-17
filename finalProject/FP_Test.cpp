//============================================================================
// Final project test
// Author      : Ayman Zeidan
//               CUNY, BMCC, CIS
//============================================================================

// *************************************************************************
// ****************************** Read Only! *******************************
// ********* Don't modify this file except to uncomment the bonus **********
// ********** assignment's test lines. *************************************
// *************************************************************************

#include <iostream>
#include <sstream>
#include <iomanip>

#include"Shape.h"
#include"Rectangle.h"
#include"IO_Ops.h"

using namespace std;

const string filenameShapes = "shapes.txt";
const string filenameBonus = "bonus.txt";

void testWrite(const Rectangle *rectangle) {

  bool result = IO_Ops::appendRectangleToFile(rectangle, filenameShapes);

  cout << "Write to file " << (result ? "Succeeded" : "Failed") << endl;
}

void bonusTest() {

 Rectangle *temp5 = new Rectangle(92.516691, 6.276236, 401407, "Rectangle_6");
 ofstream fileOut(filenameBonus, ios::out);

 if (fileOut) {

   fileOut << temp5;

   fileOut.flush();
   fileOut.close();
 }
 else
   cout << "Failed to open file: " << filenameBonus << endl;
}

int main() {

  string testSeparator;

  {
    ostringstream oss;
    oss << setfill('=') << setw(70) << "" << endl;
    testSeparator = oss.str();
  }

  // Gradually uncomment the following lines as you progress through the project.

 cout << "Test 1: creating Rectangle instance of type Rectangle using the non-default constructor." << endl;
 Rectangle *rectangle = new Rectangle(16.504326, 49.937930, 555344, "Rectangle_0");

 cout << testSeparator;

 cout << "Test 2: printing instance using getter" << endl;
 cout << rectangle->getWidth() << " " << rectangle->getHeight() << " " << rectangle->getId() << " " << rectangle->getName() << endl;

 cout << testSeparator;

 cout << "Test 3: Testing area() and double conversion operator. Both return the same result" << endl;
 cout << rectangle->area() << endl;
 double d = *rectangle;
 cout << d << endl;

 cout << testSeparator;

 cout << "Test 4: testing cin and cout. Enter values for width, height, id, and name: ";
 cin >> rectangle;
 cout << rectangle << endl;

 cout << testSeparator;

 cout << "Test 5: Testing operator=" << endl;
 Rectangle rectangle2(-1, -1, -1, "");
 rectangle2 = *rectangle;
 cout << &rectangle2 << endl;

 cout << testSeparator;

 cout << "Test 6: Deleting rectangle instance. This will print two lines, one from the ~Rectangle and one from ~Shape" << endl;
 delete rectangle;

 cout << testSeparator;

 cout << "Test 7: Testing IO_Ops.appendRectangleToFile(). This test should write 3 entries to file: " << filenameShapes << endl;
 Rectangle temp1(10.088310, 40.114547, 338202, "Rectangle_1");
 Rectangle temp2(61.609793, 15.190279, 136064, "Rectangle_2");
 Rectangle temp3(20.271415, 28.015123, 499686, "Rectangle_3");
 testWrite(&temp1);
 testWrite(&temp2);
 testWrite(&temp3);

 cout << testSeparator;

 cout << "Test 8: Testing IO_Ops.readRectangleFromFile(). This test should read the second line from file: " << filenameShapes << endl;
 Rectangle *temp4 = new Rectangle(-1, -1, -1, "");
 temp4 = IO_Ops::readRectangleFromFile(filenameShapes, 2);

 cout << temp4 << endl;

 cout << testSeparator;

 cout << "Test 9: Testing Bonus assignment (overloaded ofstream insertion operator). This test writes to file: " << filenameBonus << endl;
 bonusTest();

 cout << testSeparator;

  return 0;
}
