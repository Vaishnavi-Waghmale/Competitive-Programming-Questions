#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL),cout.tie(NULL);
   int t;
   cin >> t;
   while(t--){
      int a,b,p,q;
      cin >> a >> b >> p >> q;

      if(((a+b)%2==0 && (p+q)%2==0) || ((a+b)%2==1 && (p+q)%2==1)){
        if(a==p && b==q){
            cout << 0 << endl;
        }else{
            cout << 2 << endl;
        }
      }else{
        if (a==p && b==q)
        {
            cout << 2 << endl;
        }else
        cout << 1 << endl;
        
      }
    }
return 0;
}
