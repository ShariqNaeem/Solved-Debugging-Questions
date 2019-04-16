
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>
  
   using namespace std;
   
   int main ()
   {
      short number ;
      cout << " Enter a number : ";
      cin >> number ;
  
      cout << "The factorial of " << number << " is ";
      int factorial;
      for (factorial = 1; number > 0; --number){
      	factorial *= number;
	  }
      cout << factorial << ".\n";
  
      return 0;
  }

