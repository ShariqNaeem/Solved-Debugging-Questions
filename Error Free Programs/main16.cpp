#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  using namespace std;
  
  int main()
  {
      double number = 0, answer = 1;
      int power = 0, count = 0;
  
      cout << "Please enter a number: ";
      cin >> number;
      cout << "To what power would you like it raised? ";
      cin >> power;
      cout << "\n";
  
      cout << number << " raised to the power " << power << " is ";
  
      for (count = 0 ; count < power ; ++count)
          answer *= number;
          //answer += number;

      cout << answer << ".\n";
  
      return 0;
  }

