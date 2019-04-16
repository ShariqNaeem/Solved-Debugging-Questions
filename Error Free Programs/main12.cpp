
#include <iostream>
#include <cstdio>
     
     int main(int argc, char **argv)
     {
     	double arr[] = {10, 4, 2, 5, 3, 1};
     	int i, j;
     	int size = sizeof(arr) / sizeof(int);
     	printf("%d",size);
     	
     	for(i = 0; i < size - 2; i++) {
     		for(j = 0; j < size - i; j++) {
     			if(arr[j] > arr[j + 1]) {
     				double temp = arr[j];
     				arr[j] = arr[j + 1];
     				arr[j + 1] = temp;
     			}
     		}
     	}
     	
     	for(i = 0; i < size; i++) {
     		printf("%f\n", arr[i]);
     	}
     	
     	return 0;
     }

