/*
Exercise 4: Write a function(s) which given a string (char array) returns true if the string is a palindrome and false if it is not. A palindrome is a word, phrase, or sequence that reads the same backwards as forwards (e.g. \rotor"; \101"). Call this function from main() to test your program.
*/

#include <stdio.h>
#include <string.h>

// This program determines if the input is pallindrome.
// The input is in line 39, inside the "main" function.


void yes_or_no (char string[]){
  // Variables flag, len, i, z declared here.
  int flag = 0;
  int len, i, z;
  // function "strlen" uses library <string.h> to calculate number of character in the array "string" and assign this number to variable "len". 
  len = strlen(string);
  //FOR LOOP is used. Initiation is "i = 0", because array index starts from 0. The function keeps looping if condition, "i<len/2", is valid. "i" increases one after each loop.
  for (i=0; i < len/2; i++){
    //If character with index [i] is not (!=) the same as the mirroring character with index [len-1-i] (minus one because the largest index of a string character is string length minus 1), then variable "flag" increases by one (indicating a character is not matching the mirroring character).
    if (string[i] != string[len-1-i])
    {
      flag++;
    }
  }
  // If "flag" is 0, then below message is printed to confirm positive palindrome.
  if (flag == 0){
    printf("True! %s is a palindrome.", string);
  }
  // otherwise, "flag" value is not 0 and the below message is printed to confirm not pallindrome.
  else{
    printf("False! %s is not a palindrome.", string);
  }
}


int main(void) {
  //Please insert below the numbers or words for testing if it is a palindrome.
  char string[] = "ABerBA";
  //Here is calling function yes_or_no with array "string" as input.
  yes_or_no(string);

  return 0;
}