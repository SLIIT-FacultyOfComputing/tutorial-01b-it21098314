/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2,sum;
  float avg;
  printf("enter the numbers :");
  scanf("%d%d",&num1,&num2);
  sum = num1 + num2;
  avg = sum/2;
  printf("average is :%.2f",avg);
  
  return 0;
}

