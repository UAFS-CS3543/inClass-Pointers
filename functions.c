#include <stdio.h>

void fun1(int value, char ch);
void fun2(int *value, char *ch);
void fun3(int *array, int size);

int main(){
   int value=30;
   char ch='A';
   int numbers[]={10,20,30};

   printf("Value: %d\n",value);
   printf("ch:    %c\n",ch);

   fun1(value,ch);  /*Pass by Value */
   printf("Value: %d\n",value);
   printf("ch:    %c\n",ch);

   fun2(&value,&ch);  /* Pass by Reference */
   printf("Value: %d\n",value);
   printf("ch:    %c\n",ch);

   fun3(numbers,3);

   return 0;
}

void fun1(int value, char ch){
   value = value + 10;
   ch = ch + 1;
}

void fun2(int *value, char *ch){
   *value = *value + 10;
   *ch = *ch + 1;
}

void fun3(int *array, int size){
   int index;

   for(index=0;index<size;index++){
      printf("%d ",array[index]);
   }
}
