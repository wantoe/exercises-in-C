//WAN TO
// Exercise 4: Write a function(s) that finds, and prints, the remainder after division of one number by another (i.e. the modulo or % of a number) using recursion. Do not use any C library functions or the % operator.


#include<stdio.h>
#include<stdlib.h>


// This program calculates the remainder after division of one number by another using recursion.
//Please insert integer values of dividend and divsor as "dividend_input" and "divisor_input" in line 54 and 56 respectivcely in the "main" function. The remainder value will then be printed.

//Global variable "rem", is used for the recursion process of function "find_remainder".
int rem;

//This function "find_remainder" uses recursion to find remainder by repeatedly subtracting divisor ("divisor_input") in line 56 from dividend ("dividend_input") in line 54 until remainder "rem" becomes smaller than divisor, then return "rem"
int find_remainder(int dividend, int divisor)
{
    rem = dividend;
    if(rem >= divisor)
    {
        rem = rem - divisor;
        find_remainder(rem, divisor);
    }
    return rem;
}


// The below "if_else" function print different messages according to different inputs, including the inputs that can cause inaccurate outputs when using the function "find_remainder". 
int if_else(int dividend_input, int divisor_input, int dividend, int divisor)
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
    printf("When %d divided by %d, the remainder is %d.\n", dividend_input, divisor_input, find_remainder(dividend,divisor));
  }
}

// This "main" function consists 2 spaces for inputing dividend and divsor, also integrates the above functions and print results.
int main()
{
  // Please insert dividend integer value below between "=" and " ;".
  int dividend_input = 10 ;
  // Please insert divisor integer value below between "=" and " ;".
  int divisor_input = -5 ;

  //This function "abs()" from library "stdlib.h" absolute the inputs values, ensuring input values are postivie for the function "find_remainder". This is learnt from website https://www.tutorialspoint.com/c_standard_library/c_function_abs.htm
  int dividend = abs(dividend_input);
  int divisor = abs(divisor_input);
  
  //This "printf" function integrates and prints outputs from all functions above.
  printf("%d", if_else(dividend_input, divisor_input, dividend, divisor));

  return 0;
}