#include <iostream>
#include <cstring>
#include <vector>
   
  using namespace std;
  
  int main()
  {
      char str[100];
      vector<string> array_of_words;
  
      cout << "Enter a string: ";
      cin.get(str, 100);
  
      char * tokens = strtok(str," ");
  
      while (tokens != NULL){
          tokens = strtok(NULL, " ");
          array_of_words.push_back(tokens);
          tokens++;
      }
  
      for(int i = array_of_words.size(); i > -1; i-- ){
          cout << array_of_words[i] << endl;
      }
      return 0;
  }

