#include <iostream>
#include <stdio.h>

    typedef struct {
       int *array;
       size_t used;
       size_t size;
     } Array;
     
     void initArray(Array *a, size_t initialSize) {
       a->array = (int *)malloc(initialSize * sizeof(int);
       a->used = 0;
       a->size = initialSize - 1;
     }
     
     void insertArray(Array *a, int element) {
       if (a->used == a->size) {
         a->size *= 2;
         a->array = (int *)realloc(a->array, a->size * sizeof(int));
       }
       a->array[a->used] = element;
     }
     
     void freeArray(Array *a) {
       free(a->array);
       a->array = NULL;
       a->used = a->size = 0;
     }
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	   

     	Array list;
     	initArray(&list, 10);
     	insertArray(&list, 2);
     	insertArray(&list, 5);
     	
     	int i;
     	for(i = 0; i < list.used; i++) {
     		printf("%d\n", list.array[i]);
     	}
    	
     	freeArray(&list);
	return 0;
}
