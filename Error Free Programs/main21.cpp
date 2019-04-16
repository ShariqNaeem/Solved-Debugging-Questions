#include <iostream>
  #include <stdio.h>
   void printName(char* name,int count)
   {
       printf("%d : %s\n",count,name);
       count++;
       if(count<10)
          printName(name,count);
  }
  int main()
  {
      char name[50];
      printf("\nEnter you name :");
      scanf("%s",name);
      printName(name,0);
      return 0;
  }

