#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{    int x;
cin>>x;
    string s;
    cin>>s;
    int ct=0;
    if(s.length()==1)
    {
      cout<<"1"<<endl;

    }
    else
    {
    if(s[0]=='1')
    {
        ct=ct+1;
    }
     if(s.back()=='0')
    {
        ct=ct+1;
    }
    
    for(int i=0;i<s.length()-1;i++)
    {
        if(  (s[i]=='0') && (s[i+1]=='1'))
        {
            ct++;
        }
    }
    cout<<ct<<endl;
   //  cout<<s[0]<<" "<<s[s.length()-1]<<endl;
    }
}
	return 0;
}

  
