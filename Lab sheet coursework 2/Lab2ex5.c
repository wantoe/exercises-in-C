/*
Exercise 5: Write a function(s) to implement the Sieve of Eratosthenes algorithm  https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes. This algorithm is used to find all the prime numbers less than or equal to a given integer n. You should write 2 functions. One function should mplement the Sieve of Eratosthenes algorithm using an array stored as a global variable. The second function should print whether the given integer is prime or not prime by using the generated array from the first function - this function should only accept integers between 0 and 100 (inclusive). Finally, you should demonstrate your program by calling your  functions from main().
*/


// This program implement the Sieve of Eratosthenes algorithm to find prime number from 0 to an input number up to 100.
// Please enter a value in line 108 inside the "main" function. 

#include <stdio.h>

/*IM CONFUSED..."using an array stored as a global variable" but then "using the generated array from the first function"???*/

// The REQUIRED array stored as a global variable, containing 0-100 in indices [0] to [100]. IM CONFUSED IF YOU WANT THE ARRAY TO BE POPULATED HERE AS WELL? Array "big_array" is declared here with 102 bytes of allocated memory which is sufficient for storing 101 numbers. 
int big_array [102]; /*= {0,1,2,3,4,5,6,7,8,9,10,
11,12,13,14,15,16,17,18,19,20,
21,22,23,24,25,26,27,28,29,30,
31,32,33,34,35,36,37,38,39,40,
41,42,43,44,45,46,47,48,49,50,
51,52,53,54,55,56,57,58,59,60,
61,62,63,64,65,66,67,68,69,70,
71,72,73,74,75,76,77,78,79,80,
81,82,83,84,85,86,87,88,89,90,
91,92,93,94,95,96,97,98,99,100};
//BUT WHY GLOBAL VARIABLE? IS IT NOT ALLOWED TO USE LOOP TO ASSIGN NUMBERS INTO THIS ARRAY???
*/


// This function, based on Sieve of Eratosthenes algorithm, consists a combination of functions to find prime number between 2 to 100 and return the input number with an assigned value.
int s_of_e (int valid_num){
  // Here we are declaring variables "i", the count, and "j" for use the following functions.
  int i, j;
  
  //HERE IS THE LOOP FUNCTION THAT I USED TO POPULATE THE ARRAY, BUT APPARENTLY ARRAY AS GLOBAL VARIABLE IS REQUIRED, SO CAN THIS LOOP FUNCTION BE USED?
  
  //This FOR LOOP populates the array big_array, with numbers from 2 up to the input number, into indices of the same number. "i" is the count. Initiation "i = 2" means starting from 2, this function keeps looping when condition "i<=number" is met, and "i" increases by 1 after each loop. 
  for(i = 2; i<=100; i++){
        big_array[i] = i;}
  //LOOP FUNCTION FOR POPULAING THE ARRAY ENDS HERE.
  

  // "i" (the count) is set to 2, for the WHILE LOOP function below. It keeps looping when condition, "i*i" smaller or equal to input number, is met. So multiples greater than input number would not be tested. "i" would range from 2 to 9 depending on input number. "i++" at bottom increases "i" by one after each loop.  
  i = 2; 
  while ((i*i) <= 100){
    //In FOR LOOP, initiation is "j=2". It keeps looping when condition, "j smaller than number", is met. "j" increases by one after each loop. 
    for(j=2; j<100; j++){
    // The combination of the WHILE AND FOR loops mimick the marking of multiples of 2,3,5,7 in Sieve of Eratosthenes algorithm.

      // This IF statement includes statement "break" which ends the FOR LOOP when the condition (multiple becomes greater than input number) is met.
      if (big_array[i]*j > 100){
        break;
      }
      // This ELSE statemet assigns value of 0 to all the indices of multiples, of array big_array. 
      else{
        big_array[big_array[i]*j]=0;
        // Setting the values of multiples into 0, mimicks the removing the multiples in Sieve of Eratosthenes algorithm.
      }
    }
      // as mentioned before "i" increases by one after each WHILE loop.
    i++;
  }
  // A number (with index "valid_number") is returned to the main function, the value of this will either be 0 (indicating not prime) or remain as the original value (indicating prime).
  return big_array[valid_num];
}

// This function will print messages to confirm whether the number is prime or not. 
void prime_or_not(int final_num, int valid_num){
// IF the number input with index (of same number) has not assigned the value of 0, then the number is a prime. Confirmation message is then printed with value of valid_num.
  if (final_num!=0){
    printf("\n%d is a prime number.\n", valid_num);
  }
  // If the number input with index (of same number) has been assigned the value of 0, then the number is not a prime. Confirmation message is then printed with value of valid_num.
  else{
    printf("\n%d is not a prime number.\n", valid_num);
  }
}


// This function uses IF/ELSE statments to print different messages according to different invalid and valid inputs, and function "s_of_e" is only called when valid number, from 2 to 100, is inserted.   
int number_checker (num){
  // variable "num" represents the "number_input".
  // When "num" equals to 0 or 1 (valid inputs), the follow message is printed.
  if (num == 0 || num == 1){
    printf("%d is not a prime number.", num);
    return 0;
  }
  // When "num" is smaller than 0 (negative number, which is an invalid input), the follow message is printed (user is advised to enter valid input). 
  else if (num < 0){
    printf("Invalid negative number inserted, please enter an integer from 0 to 100.");
    return 0;
  }
  // When "num" is greater than 100 (invalid inputs), the follow message is printed and returns 0. User is advised to enter valid inputs. 
  else if (num > 100){
    printf("Input number is out of range, please enter an integer from 0 to 100.");
    return 0;
  }

  // If the input does not fit the IF statments above, this means number input is valid, this function then returns "num" back to main function. 
  else{    
    return num;
  }
}


// The "main" function where the complier starts its execution. 
int main(void)
{
  // Please insert below an integer from 0 to 100 between = and ;  
  int number_input = 1;
  // Function "number_checker" is called here, returning value is assigned to variable "valid_num.
  int valid_num = number_checker(number_input);

  // Here function "s_of_e" is called, taking variable "valid_num" as input. Variable final_num will be assigned with the returned value. 
  int final_num = s_of_e(valid_num);
  
  // this function is called, taking variable final_num and valid_num as input. 
  prime_or_not(final_num, valid_num);

    return 0;
}