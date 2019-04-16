#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
      int number, sum=0, rem=0,tempNumber;
 
      printf("Enter an integer number: ");
	        scanf("%d", &number);
  
      tempNumber=number;
  
      while(tempNumber!=0)
      {
          rem=tempNumber%10;
          sum=sum + (rem*rem*rem);
          //printf("%d:",sum);
          tempNumber/=10;
      }
  
      if(sum == number)
          printf("%d is an Armstrong number.",number);
      else
          printf("%d is not an Armstrong number.",number);
  
      return 0;

	return 0;
}
