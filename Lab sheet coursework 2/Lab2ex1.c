/*
Exercise 1: Write a function(s) that prints out the reverse of a string (do
not use a C standard library function to handle the reversal). Call this
function from main() to test your program.
*/


// This program prints characters of an input in reverse order. Please insert input in line 27. 
#include <stdio.h>
#include <string.h>

//This function with char type parameter , string[].
void print_reverse (char string[]){
  
  // "strlen" is a function from the library <string.h>. It calculates the number of character in a string and returns the number. Here we store that number into variable "len".  
  int len = strlen(string); 
  
  // FOR loop is used to print the input characters in reverse order. "i" is the count. Initiation is "i=len-1", hence input characters is being printed from the back (input character with higher index number is printed first), also len-1 because array index starts from 0. Condition is when i equals or less than 0. "i--" indicates that "i" reduces by 1 after each loop. It keeps printing a character in reverse order as long as condition is met. 
  for (int i = len-1 ; i>=0 ; i--)
  printf("%c", string[i]);
}


int main(void) {

  //Please insert string below between " and ".
  char string [] = "-100";
  
  // Here we print the first half of the message
  printf("The reverse of %s is ", string);
  //Here we are calling function "print_reverse" with array "string" as input. 
  print_reverse (string);
  return 0;
}