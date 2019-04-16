#include <iostream>
 
   using namespace std;
   int main()
  {
      string str[10], temp;
  
      cout << "Enter 10 words: " << endl;
      for(int i = 0; i < 10; ++i)
      {
        getline(cin, str[i]);
      }
  
     for(int i = 0; i < 10; i++)
         for( int j = 0; j <= i; j++)
         {
            if(str[i] < str[j])
            {
              temp = str[i];
              str[i] = str[j];
              str[j] = temp;
            }
      }
  
      cout << "In lexicographical order: " << endl;
  
      for(int i = 0; i < 10; ++i)
      {
         cout << str[i] << endl;
      }
      return 0;
  }


