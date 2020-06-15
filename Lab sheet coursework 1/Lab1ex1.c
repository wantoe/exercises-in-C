//WAN TO
// Exercise 1: Write a function(s) that finds, and prints, whether a number is even or odd and/or prime. For example, given the number 11 we would expect to be printed odd and prime.


#include <stdio.h>
#include <stdbool.h>
#include <math.h>


// This program determines if an input number is even or odd and/or prime. Please insert a number in line 83 in the "main" function.

// This function determines if input number is odd or even (by calculating if a number is divisible by 2).
// This function uses library stdbool.h for boolean type. 
bool odd_or_even(int n)
  {
      if (n % 2 == 0)
      {
        return true;
      }
      return false;
  }


// This function determines if input number is prime or not prime. (Number is prime if its not divisible by all the smaller numbers (than itself) starting from 2, otherwise not prime).
// This function uses library stdbool.h for boolean type.
bool is_it_prime(int n)
{
  for (int counter = 2; counter < n; counter++)
  {
    if (n % counter == 0)
    {
      return false;
    }
  }
  return true;
}


// The function integrates both functions above and outputs the print messages according to different possible input number.
int integration (n)
{
  // If input is negative, it prints "invalid and please enter a positive integer".
  if (n < 0)
  {
    printf("Invaid, as negative number inserted. Please enter a positive integer.\n");
  }
  // If input is 0, it prints "even and not prime".
  else if (n == 0)
  {
    printf("0 is even and not a prime number.\n");
  }
  //if input is 1, it prints "odd and not prime".
  else if (n == 1)
  {
    printf("1 is odd and not a prime number.\n");
  }
  // If input is 2, it prints "even and prime".
  else if (n == 2)
  {
    printf("2 is even and a prime number.\n");
  }
  // If input is not equals to 2 and is divisible by 2, it prints "even and not prime".
  else if (odd_or_even(n))
  {
    printf("%d is even and not a prime number.\n", n);
  }
  // If the input is not divisible by any smaller numbers than itself starting from 2, it prints "odd and prime".
  else if (is_it_prime(n))
  {
    printf("%d is odd and a prime number.\n", n);
  }
  // The remainder numbers: when input number is divisible by any number smaller than itself starting from 2, it prints "odd and prime".
  else
  {
    printf("%d is odd and not a prime number.\n", n);
  }
}

// This "main" function contains a input space for inserting a number and prints the outputs from function "integration". 
int main()
{
  // Please insert a postivie integer as input_number below between "=" and ";".
  int input_number = 9;
  int n = input_number;

  // This function prints outputs from function "integration".
    printf("%d", integration (n));
  return 0;
}