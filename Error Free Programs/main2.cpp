#include <iostream>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	long int bin_number, dec_number = 0, i = 1, remainder_num;
       //printf("Please Enter any Binary Number: ");
       //scanf("%d",&bin_number);
       bin_number=101;
       while(bin_number > 0 )
       {
           remainder_num = bin_number % 10;
           dec_number = dec_number + remainder_num * i;
           i=i*2;
           bin_number=bin_number/10;
       }
       printf("%d Equivalent Decimal value:",dec_number);
  

	
	return 0;
}

int power(int num){
	int temp=0;
	for(int i=0;i<num;i++){
		if(i==0){
			temp++;
		}
		else{
			temp++;
		}
	}
	return temp;
	}


