/* Exercise 2: Write a function(s) that converts an octal number, represented
as a string (char array), into its decimal value (do not use a C standard
library function to handle the conversion). Call this function from main()
to test your program.
*/ 
/* Concept:index 0 x 8 ^(n-1) + index (0+1) x 8 ^ (n-2) + ....
n = number of characters */
// need to eliminate any numbers larger than 7


// This program converts string of octal number into decimal number. Please insert input in line 57.
#include <stdio.h>
#include <string.h>
#include <math.h>


// This function convert a string of octal number into decimal number. 
void oct_to_dec (char string[], int len){
  // here are the variables "i, num, current, sum, total_len and flag" being declared.
  int i, num, current; 
  int sum = 0;
  int flag = 0; 
  // value of "len" is stored in a new variable "total_len".
  int total_len = len;
  // value of variable of "len" is reduced by one to represent array index value (which starts from 0) 
  len = len - 1;
  // FOR LOOP is used. Initiation is "i=0". The below functions keep looping when condition, "i less than total_len", is met. After each loop, "i" increases by 1. 
  for (i=0; i < total_len; i++){
    // string index number goes up by one after each loop.
    string[0] = string[i];
    // the below statement convert the value stored in index 0 from data type "char" to "int".
    num = *string - '0';
    //variable "current" stores result value from equation "num" times ("len" to the power of 8)  
    current = num * pow(8,len);
    //variable "sum" stores sum of "sum" plus "current".
    sum = sum + current;
    // value of "len" minus one after each loop. 
    len = len -1;
    // This IF statment increases value of variable "flag" by one if a value of a digit ("num") of input number is smaller than 0 or greater than 7.
    if (num<0 || num>7){
      flag++;
    }
  }
  // If value of "flag" is 0 then input number is valid (all digit ranges from 0 to 7. The resulting decimal number is then printed. 
  if (flag == 0){
  printf("The decimal result is %d\n", sum);
  }
  // Otherwise, the following message is printed to indicate invalid input.
  else{
    printf("Invalid input, please enter a postivie integer as input.\n");
  }
}


int main(void) {
  // Please insert positive integer, with each digit value between 0-7.
  char input [] = "23456";
  //function "strlen" uses library <string.h>, it calculates the number of characters in string "input" and assign that number to variable len. 
  int len = strlen(input);
  // oct_number allocate memory of value of "len" bytes plus 3 bytes to ensure sufficient memory to store input characters. 
  char oct_number [len+3];
  // function "strcpy" uses library <string.h>, copies stored characters from array "input" and pastes them into array "oct_number".
  strcpy(oct_number, input);
  // First part of the message is printed.
  printf("Octal number entered is: %s\n", oct_number);
  // This function checks if input characters are valid or not.

  // here this function is called, inputs are variable "oct_number" and "len".
  oct_to_dec(oct_number,len);
  
  return 0;
}
