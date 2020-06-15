//WAN TO
// Exercise 3: Write a function(s) that finds, and prints, the remainder after division of one number by another (i.e. the modulo or % of a number) using iteration. Do not use any C library functions or the % operator.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//This program finds and prints the remainder after division of one number by another.

//Please insert integer values of dividend and divsor as "dividend_input" and "divisor_input" in line 55 and 57 respectively in the "main" function. The remainder value will then be calculated and printed.

//This function "find_remainder" uses WHILE LOOP to find remainder by repeatedly subtracting divisor ("divisor_input") in line 57 from dividend ("dividend_input") in line 55 until "remainder" becomes smaller than divisor, then return the value of final remainder.
int find_remainder(int dividend, int divisor)
{
	int remainder = dividend;
  int curr;

  while (remainder >= divisor)
  {
    curr = dividend - divisor ;
    dividend = curr ;
    remainder = curr ;
	}
	  return remainder ;
}


// The below "if_else" function print different messages according to different inputs, including the inputs that can cause inaccurate outputs when using the function "find_remainder". 
int if_else (int dividend_input, int divisor_input, int dividend, int divisor)
{
  // 1. When divisor is 0, error occurs, hence message is specially printed.
  if (divisor_input == 0)
  {
    printf("Divisor cannot be 0, as the answer is undifined, please enter an integer as divisor.\n");
  }

  // 2. When dividend is 0, remainder is inaccurately calculated, hence message is specially printed. According to my maths teacher friend, remainder equals to divisor in this case.
  else if (dividend_input == 0)
  {
    printf("When %d divided by %d, the remainder is %d.\n", dividend_input, divisor_input, divisor);
  }

  // 3. Below message is printed when no error is caused by acceptable inputs by function "find_remainder".
  else
  {
    printf("When %d is divided by %d, the remainder is %d.\n", dividend_input, divisor_input, find_remainder(dividend,divisor));
  };
}


// This "main" function consists 2 spaces for inputing dividend and divsor, also integrates the above functions and print results.
int main(void) 
{
  // Please insert integer value as dividend below between "=" and " ;".
  int dividend_input = -1239;
  // Please insert integer value as divisor below between "=" and " ;".
  int divisor_input = 100;

  //This function "abs()" from library "stdlib.h" absolutes the input values, ensuring input values are positive for the function "find_remainder". This is learnt from website https://www.tutorialspoint.com/c_standard_library/c_function_abs.htm
  int dividend = abs(dividend_input);
  int divisor = abs(divisor_input);

  printf("%d\n", if_else(dividend_input, divisor_input, dividend, divisor));

  return 0;
}