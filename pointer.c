#include <stdio.h>


int main(){
   int number = 5;
   int *ptr;

   ptr = &number;

   printf("number: %d\n",number);
   printf("*ptr:   %d\n",*ptr);

   *ptr = 28;

   printf("number: %d\n",number);
   printf("*ptr:   %d\n",*ptr);
   
   return 0;
}
