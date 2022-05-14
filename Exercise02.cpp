#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
// ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
  int length, width, radius;
  cout << "Enter length of Rectangle : ";
  cin >> length;
  cout << "Enter width of Rectangle : ";
  cin >> width;
  cout << "Enter radius of Circle : ";
  cin >> radius;
  // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
  // 1. Create a dynamic Rectangle type variable (pointer)
  Rectangle *r1;
  
  // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
  
  r1 = new Rectangle(length,width);
  
  // 3. Create a dynamic Circle type variable (pointer)
  Circle *c1;
  
  // 4. Create a dynamic Circle Object set radius that was input from the keyboard
  c1= new Circle(radius);
  
  // 5. Call the display method of the Rectangle Object
  r1 -> display();
  
  // 6. Call the display method of the Circle Object
  c1 -> display();
  
  // 7. Delete the Rectangle Object from memory
  delete r1;
  
  // 8. Delete the Circle Object from memory
  delete c1;
  
  
  // ============ DO NOT CHANGE THE CODE BELOW ===================
  cout << "End of Program" << endl;
  
}