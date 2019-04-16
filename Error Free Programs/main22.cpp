#include <iostream>
#include <iostream>
   
  using namespace std;
  
  int main()
  {
      char my_string[1000];
      char temp_buff[100];
      int read_input = -1;
      int total_read_so_far = 0;
  
      while(read_input != 2){
          cout << "Enter a string: ";
          gets(temp_buff);
	     read_input = sprintf(&my_string[total_read_so_far], "%s ", temp_buff);
          total_read_so_far += read_input;
      }
      cout << my_string;
  
      return 0;
  }


