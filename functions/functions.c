
#include <stdio.h>
// this is for lowlevelacadamy(LLA) i like to write this in my nvim ide for note
// takeing purposes the num1 and num2 are provided by LLA this is a exersise
//
int add_two_numbers(int num1, int num2) {
  int total = num1 + num2;
  return total;
  // had a problem where the funtion would also print out another number on the
  // line below
  // fixed it by returning total before calling it to the printf
  printf("%d\n", total);
  return 0;
}
