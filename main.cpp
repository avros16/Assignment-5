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

   int count {0};
      int integer{0};
      int expo{0};
      int calc {1};

      cout << "Enter a number: ";
      cin >> integer;

      cout << "Enter an expononent"; 
      cin >> expo;

      while (count < expo) {


          calc = calc * integer; //calculation 1* integer ->> 5*5 --> 25*5 and so on
          count++; // increase count

      }

      cout << calc; //print statement

  }


// ******



  int num{0};
  int count{0};
  int ans{1}; //init at 1 for calculation purposes
  int int1{0};
  int int2{1}; // init at 1 for cal purposes

      cout<< "Enter number: ";
      cin >> num;


      while (count < num) { // not less than or equal to cause we are starting the loop with a value.
          cout << int1 << endl; // start with cout to display first #
          ans = int1 + int2; // calculation
          int1 = int2; // reassigning value
          int2 = ans; //reassigning value
          count++; // adjusting count

      }
  }

}