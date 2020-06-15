//WAN TO
// EXERCISE 2: Write a function(s) that calculates, and prints, the distance between two points. For example, if the points were (0, 0) and (3, 4), we would expect to see 5.00 printed.

#include <stdio.h>
#include <math.h>


// This function contains 3 equations, based on Pythagorean theorem, calculates the direct distance between 2 points, A and B, in 2D space. 
// Coordinates of point A are (x1,y1) and coordinates of point B are (x2,y2). Please insert them in the "main" function (line 31 to 36).
// This function uses library math.h to perform mathematics calculations.
double distance_between_2points (double y2, double y1, double x2, double x1)
{
  //This equation calculates distance between y2 and y1, then squares this distance.
  double squared_distance_y = pow((y2 - y1), 2);

  //This equation calculate distance between x2 and x1, then squares this distance.
  double squared_distance_x = pow((x2 - x1), 2);

  //This equation performs addition of squared_distance_y result and squared_distance_x result, then square root the sum, and eventually finds the direct distance between point A and B.
  double final_distance = sqrt (squared_distance_y + squared_distance_x);

  return final_distance;
}


//Below "main" function contains input spaces for inserting values of coordinates of point A and B, and also prints a result from above function.
int main(void) 
{
  //Insert the coordinates of the point A below.
  double x1 = -2;
  double y1 = -1;

  //Insert the coordinates of the point B below.
  double x2 = 2;
  double y2 = 3;

  //Below function "printf" prints the result from function "distance_between_2points".
  printf("The distance between point A (%.0f,%.0f) and point B (%.0f,%.0f) is %.2f.\n", x1, y1, x2, y2, distance_between_2points (y2, y1, x2, x1));
  return 0;
}