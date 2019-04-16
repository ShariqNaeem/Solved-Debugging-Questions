#include <iostream>

  using namespace std;
  
  int main()
  {
      int w=6;
  
      for(int g=0;g<9;g++){
          cout<<"*";
      }
      cout<<endl;
  
      for(int a=0;a<=3;a++){
  
          for(int b=0;b<a;b++){
              cout<<" ";
          }
          cout<<"*";
  
          for(int c = 0; c <= w; c++){
              cout<<" ";
          }
          w-=2;
          cout<<"*"<<endl;
          
      }
  
      for(int e = 1; e <= 1 ; e++){
          for(int f = 5; f > e; f--){
              cout<<" ";
          }
          cout<<"*";
      }
      return 0;
  }

