#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  
  int fibonacci(int n)
    {
      if(n<=1){
          return(n);
      }
      else{
          return(fibonacci(n-1)+fibonacci(n-2));
      }
  }
  
  int main()
  {
     int n,i=0;
     printf("Input the number of terms for Fibonacci Series:");
     scanf("%d",&n);
     printf("\nFibonnaci Series is as follows\n");
  
     while(i<n){
         printf("%d ",fibonacci(i));
         i++;
     }
  
      return 0;
}
