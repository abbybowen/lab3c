// Author: Abigail Bowen
// Collaborator: Nathan Knox nhk5053@psu.edu
// Collaborator: Aaryan Darshin Bavishi aqb6298@psu.edu
// Section: 6
// Breakout: 10

#include <stdio.h>
#include <math.h>
#include <readline/readline.h>
#include <stdlib.h>

   int sum_n(int n) {
    if (n <= 1){
     return n;
   }
    else {
      return (n) + sum_n(n - 1);
    }
     
  }
  
   void print_ntimes(const char *s, int n) {
     if (n>=1){
      printf("%s\n",s);
      print_ntimes(s, n-1);
     }
    return;
  }


 int main(void) {
   int n = atoi(readline("Enter an int: "));
   printf("sum is %d.\n",sum_n(n));
   char *s = readline("Enter a string: ");
   print_ntimes(s, n);

 }
