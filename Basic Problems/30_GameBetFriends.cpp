//Vaishnavi-Waghmale
#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      if(a>=b){
         b = b+c;
         if(a>=b){
            b = b+d;
         }else{
            a = a+d;
         }
      }else{
         a = a+c;
         if(a>=b){
            b = b+d;
         }else{
            a = a+d;
         }
      }
      
      if(a>=b){
         cout<<"N\n";
      } else{
         cout<<"S\n";
      }
   }
	return 0;
}