#include <iostream>
using namespace std;

int main() {
  
  int operand1 = 3;
  int operand2 = 2;
  cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  cout << "operand1 & operand2 = " << (operand1 & operand2) << endl;
  cout << "operand1 | operand2 = " << (operand1 | operand2 )<< endl;
  cout << "operand1 ^ operand2 = " << (operand1 ^ operand2) << endl;
  
  return 0;
}

// Example program with left and right shift bitwise operators
/*
#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int operand1 = 2;
  int operand2 = 1;

  cout << "operand1 >> operand2 = " << (operand1 >> operand2) << endl;
  cout << "operand1 << operand2 = " << (operand1 << operand2) << endl;
    
  return 0;
} */ 
/*
Right-shifting an operand1 >> operand2 is equivalent to dividing operand1 by 2^operand2.
Left-shifting an operand1 << operand2 is equivalent to multiplying operand1 by 2^operand2.
*/

// Operator ~ 
/*
#include <iostream>
using namespace std;

int main() {
  int operand = 5; 
  cout << "2's complement of " << operand << " = " << ~operand + 1 << endl; 
  return 0;
} */
