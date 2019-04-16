#include <iostream>
#include <cstdio>
#include <algorithm>
     
     void add_sub(int *a, int *b) {
         int x, y;
         x = (*a + *b);
         y = abs((*b - *a));
         a = &x;
         b = &y;
         
         printf("%d\n%d", *a, *b);
     }
     
     int main(char argc, char **argv) {
         int a, b;
         int *pa = &a, *pb = &b;
         
         scanf("%d %d", pa, pb);
         
		 
		 add_sub(pa, pb);
         
     
         return 0;
     }

