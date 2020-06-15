//WAN TO
// 5. Write a function(s) which finds, and prints, the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <stdio.h>
#include <math.h>


// This program finds and prints the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum of the first one hundred natural numbers. 
//Please insert the input as 100 in line 74 and answer will be printed.

// This function uses <math.h> and FOR LOOP to calculates sum of first 100 natural numbers. As count goes from 1 to 100, it keeps adding values of numbers to the sum until count "i" reaches value of n which is 100. Then return the sum.
int cal_sum (int n)
  {
    int i, sum = 0;

    for(i = 1; i <= n; i++)
    {
      sum = sum + i;
    }
    return sum;
  }


// This function uses library <math.h> and squares the sum of first 100 natural numbers. Now we have the "squared sum".
int pow2 (int x)
  {
    int y = pow(x,2);
    return pow(x,2);
  }


// This function uses library <math.h> and FOR LOOP to calculate sum of squared numbers of the first 100 natural numbers. Now we have "sum of squared". As count "i" goes from 1 to 100, it keeps adding squared numbers to the sum until "i" reaches 100. Then return the sum.
int sum_of_pow2 (int y)
{
  int i; 
  int sum = 0;
  for (i = 1; i <=100; i++)
  {
    sum = sum + pow(i,2);
  }
  return sum;
}


// This function find the difference between "squared sum" and "sum of squared" by subtraction.
int subtraction (int x, int y)
{
  int z = x - y;
  return x-y;
}


//This function prints different outputs if input is 100 or not.
int valid_number (int n)
{
// This "if" function prints the output when input is 100.
  if (n == 100)
  {
  printf("The difference between the sum of the squares of the first one hundred natural numbers (%d) and the square of the sum of the first one hundred natural numbers (%d) is %d.\n", sum_of_pow2 (n), pow2(cal_sum(n)), subtraction(pow2(cal_sum(n)), sum_of_pow2 (n)));
  }
  //This "else" function prints the ouput when input is not 100.
  else
  {
  printf("Invalid input. Please enter 100. This program only finds and prints the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum of the first one hundred natural numbers, which is 25164250.\n");
  }
}


// This "main" function integrates the above functions and prints outputs. 
int main(void) 
{
  // Please enter 100 below between "=" and ";".
  int input = 100;
  int n = input;
  printf("%d", valid_number(n));
  return 0;
}