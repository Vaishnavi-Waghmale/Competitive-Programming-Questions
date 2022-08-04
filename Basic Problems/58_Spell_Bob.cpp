#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    string s1,s2;
    for(int i=0;i<t;++i)
    {cin>>s1>>s2;
      {if((s1[0]=='b' || s2[0]=='b') && (s1[1]=='o' || s2[1]=='o') && (s1[2]=='b' || s2[2]=='b'))
          cout<<"yes"<<endl;
       else if((s1[0]=='b' || s2[0]=='b') && (s1[1]=='b' || s2[1]=='b') && (s1[2]=='o' || s2[2]=='o'))
          cout<<"yes"<<"\n";
       else if((s1[0]=='o' || s2[0]=='o') && (s1[1]=='b' || s2[1]=='b') && (s1[2]=='b' || s2[2]=='b'))
          cout<<"yes"<<"\n";
       else
         cout<<"no"<<"\n";
      }
        
    }
    
	return 0;
}
