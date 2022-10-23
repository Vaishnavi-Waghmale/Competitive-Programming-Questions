#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
   cin>>t;
   while(t--)
   {
      int n,ans=0;
      cin>>n;

      string s1;
      cin>>s1;

      string s2;
      cin>>s2;

      map<char,int> m1;
      map<char,int> m2;

      for(int i = 0; i<n; i++)
      {
        m1[s1[i]]++;
        m2[s2[i]]++;
      }

      for(auto it1 = m1.begin(); it1 != m1.end(); it1++)
      {
        for(auto it2 = m2.begin(); it2 != m2.end(); it2++)
        {
          if(it1->first == it2->first)
          {
            ans = max(ans,min(it1->second,it2->second));
          }
        }
      }
      cout<<ans<<endl;
	}
	return 0;
}
