#include <stdlib.h>
#include <iostream>
   
  using namespace std;
  int main()
   {
      int arr1[50], arr2[50], size1, size2, size, i, j, k, merge[50];
      cout << "Enter Array 1 Size : ";
      cin >> size1;
      cout << "Enter Array 1 Elements : ";
  
      for(i = 0; i < size1; i++){
          cin >> arr1[i];
      }
      cout << "Enter Array 2 Size : ";
      cin >> size2;
      cout << "Enter Array 2 Elements : ";
  
      for(i = 0; i < size2; i++){
          cin >> arr2[i];
      }
  
      for(i = 0; i < size1; i++){
          merge[i] = arr1[i];
      }
      
      int totalSize=size1+size2;
      
      for( i=size1,j=0;i<totalSize;i++,j++){
      	merge[i]=arr2[j];
      	
	  }
  
      cout <<"Now the new array after merging is :\n";
      size=size1+size2;
      for(i = 0; i < size; i++){
          cout << merge[i]<<" ";
      }
      return 0;
  }

