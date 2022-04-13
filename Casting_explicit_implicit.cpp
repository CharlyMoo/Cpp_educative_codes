// IMPLICIT
#include <iostream>

using namespace std;

int main() {
  // Stores floating point value in variable of type int
  int int_value = 13.9;
  // Displays the value of variable
  cout << int_value;

}

// EXPLICIT
#include <iostream>

using namespace std;

int main() {
  // Initializes a variable of char data type
  char character = 'A';
  // Declares a variable of int type
  int ASCII;
  // Converts char data type into int explicitly
  ASCII = (int) character;
  // Prints value of variable
  cout << "ASCII value = " << ASCII;

}
