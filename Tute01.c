/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1;
  int sub2;
  float sum,avg;

  printf("Input mark of subject 1 : ");
  scanf("%d",&sub1);

  printf("Input mark of subject 2 : ");
  scanf("%d",&sub2);

  sum = sub1 + sub2;
  avg = sum/2;

  printf("Average is :%.2f ", avg);
  
  return 0;
}

