#include <iostream>
using namespace std;

int main() {
// Initialize a variable total_seconds
    // FACT: 1 HOUR = 60 minutes, 1 minute = 60 seconds, 1 second = 1/3600
  int total_seconds = 3870;
// Prints value of total_seconds
  cout << "total_seconds = " << total_seconds << endl;
// Declares variable
  int hours, minutes, seconds;
// Convert seconds in hours and store the output in hours variable
  // divide total_seconds/3600, 
  hours = total_seconds/3600;
  cout << "Time in hours, minutes and seconds = ";
// Prints value of hours
  cout << hours << "h :";
// Store the remaining seconds in total_seconds
  // after find the hour, lets find the remaining of total_hours/3600 which are the minutes represented in seconds
  total_seconds = total_seconds % 3600;
// Convert seconds in minutes and store the output in minutes variable
  minutes = total_seconds/60;
// Prints value of minutes
  cout << minutes << "m :";
// Store the remaining seconds in seconds variable
  seconds = total_seconds % 60;
  cout << seconds << "s";
 
  // MY SOLUTION FOR THIS CHALLENGE 
/*  
seconds = total_seconds % 60; 
hours = total_seconds / (60*60);
minutes = (total_seconds / 60) % 60;

cout << "hours = " << hours << endl;
cout << "minutes = " << minutes << endl;
cout << "seconds = " << seconds << endl;
*/
}



