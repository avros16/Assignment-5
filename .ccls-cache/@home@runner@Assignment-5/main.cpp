#include <iostream>

// Q1 Use a loop to calculate the factorial of an integer 
//Q2 Use a loop to calculate the result of a number raised to an exponent 
//Q3 Take a number(let's say n) from the user, and find first n fibonacci sequences.

using std::cout;
using std::cin;
using std::endl;

int main() {


   //******** problem 1 *******
//   int num{0};
//   int count{0};
//   int fact{1};



  
//  cout << "Enter an integer";
//   cin >> num;

  
// while (count < num) {
  
//   fact = fact * (num - count);

//   // factoral = 1 * (5-0) = 1*5 = 5
//   // factorial = 5 * (5-1) = 5*4
  
//   count++;
  
// }
//   cout << fact;

//****** Problem 2 ******


int num2{0};
int num{0};
int count{0};
int expo{0};
int calc {1};



  
  cout << "Enter an integer";
   cin >> num; 

  cout << "Enter an exponent";
  cin >> expo;

  // expo = 3
  // calc = 5 * 5
  // calc = 25
  // answer= calc * num
  //answer = 25 * 5
  // answer = 125
  
while (count <= expo) {
  
  num2=(num * num);
  
  calc = num2; 
  
  count ++;
}



  
  
cout << calc;
  


  
} 