#include <iostream>
#include <cstdio>
     
     void divide(int arr[], int divisor) {
     	int i;
     	for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
     		arr[i] = arr[i] / divisor;
     	}
     }
     int main(int argc, char **argv)
     {
     	int arr1[] = {20, 10, 5, 40, 100};
     	//divide(arr1, 5);
     	
     	int i;
     	for(i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
     		arr1[i] = arr1[i] / 5;
     	}
     	
     	for(i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
     		printf("%d",arr1[i]);
     	}
     	
     	return 0;
     }

