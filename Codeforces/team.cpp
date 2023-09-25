#include <iostream>
#include<string>
using namespace std;

int main() { 
     int t;
     cin>>t;
     while(t--){
     string str;
     cin>>str;
     int len=str.size();
     if(len>10){
     cout<<str[0]<<(len-2)<<str[len-1]<<endl;
      else{
         cout<<str<<endl;
      }
     }
     return 0;
     }
     
    }      }
      }
