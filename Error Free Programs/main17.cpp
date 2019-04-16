#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

   using namespace std;
  
   int main()
   {
      int N;
       cin >> N;
      for(int i = 2; N > 0; ++i){
          bool isPrime = false;
          for (int j = 2; j < N ; j++){
              if(i % j == 0){
                  isPrime = true;
                  break;
              }
          }
          if(isPrime){
              --N;
              cout << i << " ";
          }
      }
      return 0;
   }


