#include <iostream>
using namespace std;

int main() {
  // Initilaize operand1 and operand2
  int operand1 = 50;
  int operand2 = 26;
  // Prints value of operand1 and operand2
  cout << "Values of operands are:" << endl;
  cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  // Adds operand1 and operand2; and print their result
  cout << "Addition = " << operand1 + operand2 << endl;
  // Subtracts operand1 and operand2; and print their result
  cout << "Subtraction = " << operand1 - operand2 << endl;
  // Multiplies operand1 and operand2; and print their result
  cout << "Multiplication = " << operand1 * operand2 << endl;
  // Divides operand1 and operand2; and print their result
  cout << "Division = " << operand1 / operand2 << endl;
  // Returns remainder of operand1 and operand2; and print it
  cout << "Modulus = " << operand1 % operand2 << endl;
  return 0;
}
