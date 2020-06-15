/*
Exercise 3: Write a function(s) that prints out a tree shape (see below).
The function should take two arguments: a tree width and a trunk height.
For example, the arguments 9 and 4 will print out a tree of width 9 and
trunk length 4, as shown below:
*
***
*****
*******
*********
***
***
***
***
You can assume that the width of the tree will be odd and hence every line
will have an odd number of asterisks. The trunk will always have a width
of three asterisks. Call this function from main() to test your program.
*/



#include <stdio.h>
//Please insert numbers in line 142 and 144 to print a tree. 

// This function uses FOR LOOP to print spaces on the left of stars in tree crown (which shifts the tree crown to the right as the tree_crown_width_input becomes greater).
//The input (variable "s") is in fact tree crown base width divided by 2. 
void spaces (int s){ 
  int i; // so called the count
  // In initial stage "i=0", condition is "i" smaller than input "s", "i" increases by one after a loop. In each loop, a space is printed.  
  for (i=0; i<s ; i++){
  printf (" ");
  }
}


// This is the function that prints star in each row.
void base_w (int w){
  int i = 1; // so called the counter, which initially set to 1. 
  // WHILE LOOP is used. The condition is "i" must be smaller or equals to "w". 
  while (i <= w){
  // This print stars.
  printf ("*");
  // "i" increases by 1 after each loop.
  i=i+1;
  }
  // After a row of stars are printed using WHILE LOOP, this move the printing to the next line. 
  printf("\n");
}


// This function prints space before the trunk stars.
void move_tk (int s){
  int i; // so called counter
  // FOR LOOP is used. In initial stage, "i"=0. Condition is "i"must be smaller than "w". If condition is met, it prints one space each loop. After each loop, "i" increases by 1, until condition is no longer met. 
  for (i=0; i<s ; i++){
  printf (" ");
  }
}


// this function prints the trunk.
void trunk_height (int h, int w){
  int i = 1;
  int s = w/2-1; // s = width divided by 2 then minus 1, this ensures spaces are printed according to the width of crown. 
  //WHILE LOOP is used, which works when the condition that "i" must be smaller or equal to "h", is met.
  while (i <= h){
  // function "move_tk" with "s" as input is called within this loop. 
  move_tk (s);
  // This ensures 3 stars are printed in each row for trunk, then move the typing to a new line. 
  printf ("***\n");
  // "i" increases by one after each loop. 
  i=i+1;
  }
}


// This function uses FOR LOOP,
void loop_row (int w, int h){
  // "i" is the count, also represents the number of stars being printed in a row.
  int i; 
  // "t" represents "w" divided by 2, its used for function "space".
  int t = w/2;
  // In initial stage, "i"=1. Condition is "i" equal or smaller than "w". If condition is met, we start from initial stage (one star printed) and run the function within the loop. After each loop, "i" increases by 1.   
  for (i=1; i<=w ; i++){
    //function "spaces" "t" as input is being called. 
    spaces (t);
    t = t - 1; // this line reducues the value of "t" as "i" increases.  
    //function "base_w" with "i" as input is being called.  
    base_w (i);    
    //The combination of "i=i+1" and "i++" increases counter "i" by 2 and remains odd number after each loop, hence number of stars in each row of tree crown is odd number.
    i=i+1; 
  }
  // After the tree crown is printed, this function with inputs of "h" and "w" is executed to build the trunk.
  trunk_height (h,w);
}


// This IF/ELSE function prints various messages according to any invalid inputs of w and only return valid values of w .
int number_checker_w (int w){
  // if w is negative (invalid), the below message is printed. Otherwise next test.
  if (w < 0){
    printf("Oh no! You are not getting a tree crown. Because of invalid negative number inserted for tree_crown_width. Please enter positive integer for the tree_crown_width.\n\n");
    return 0;
  }
  // if w = 0 (its valid actually), the below message is printed. Otherwise next test.
  else if (w == 0){
    printf("Oh no! You are not getting a tree crown. Because 0 was inserted for tree_crown_width. Don't you want a big fat tree crown? \n\n");
    return 0; 
  }
  // if w divided 2 gives remainder of 0, in other words, if w is even number, the below message is printed.
  else if (w % 2 == 0){
    printf("Oh no! You are not getting a tree crown. Because of invalid number even number inserted for tree_crown_width. Please enter odd integer  for the tree_crown_width.\n\n");
    return 0;    
  }
  // After going through tests above, value of w must be valid, hence we are returning value of w back to main function.  
  else {
    return  w;
  }
}

// This IF/ELSE function prints various messages according to any invalid inputs of h and only return valid values of w .
int number_checker_h (h){
  // if h is negative (invalid), the below message is printed. Otherwise next test.
  if (h < 0){
    printf("Oh no! You are not getting a trunk. Because invalid negative number inserted for trunk_height. Please enter a positive integer for the trunk_height.\n\n");
    return 0;
  }
  // if h = 0 (its valid actually), the below message is printed.
  else if (h == 0){
    printf("Oh no! You are not getting a trunk. Because 0 was inserted for the trunk_height. Don't you want a big long trunk? \n\n");
    return 0;
  }
   // After going through tests above, value of h must be valid, hence we are returning value of w back to main function.  
  else {
    return h;
  }
}


int main(void) {
  // Please enter postivie odd number for tree crown base width between = and ;.
  int tree_crown_width_input = 9;
  // Please enter postive number for trunk height between = and ;.
  int trunk_height_input = 3;
  
  // Below are variables w and h representing variables tree_width_input and trunk_height_input, for easier and shorter inputs into other funcitons.
  int w = tree_crown_width_input;
  int h = trunk_height_input;

  // Here we are inputing values of w and h into two separate functions for validity checking. The functions return and assign the valid values of w and h into variables x and y respectively.  
  int x =  number_checker_w (w);
  int y = number_checker_h (h);
  
  // This function takes x and y as inputs.  
  loop_row (x,y);


  //Good song!!
  printf("\n\nSo here it is Merry Xmas Everybody's having fun!\n");
  return 0;
}