#include <iostream>

// Q1 Use a loop to calculate the factorial of an integer 
//Q2 User a loop to calculate the result of a number raised to an exponent 
//Q3 Take a number(let's say n) from the user, and find first n fibonacci sequences.

using std::cout;
using std::cin;
using std::endl;

int main() {

  int num{0};
  int count{0};
  int fact{1};



  
 cout << "Enter an integer";
  cin >> num;

  
while (count < num) {
  
  fact = fact * (num - count);

  // factoral = 1 * (5-0) = 1*5 = 5
  // factorial = 5 * (5-1) = 5*4
  
  count++;
  
}
  cout << fact;
} 