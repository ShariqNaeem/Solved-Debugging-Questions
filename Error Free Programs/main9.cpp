#include <iostream>
#include <stdio.h>     

     
	 int* deepcopy(int arr[]) {
     	int size = sizeof(arr) / sizeof(arr[0]);
     	int copy[size];
     	int i;
     	for(i = 0; i < size; i++) {
     		copy[i] = arr[i];
     	}
     	return copy;
     }
     
     int main(int argc, char **argv)
     {
     	int arr1[] = {20, 10, 5, 40, 100};
     	int *arr2 = deepcopy(arr1);
     	
     	int i;
     	
     	for(i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
     		printf("%d\n", *arr2 + i);
     	}
     	
     	return 0;
     }


