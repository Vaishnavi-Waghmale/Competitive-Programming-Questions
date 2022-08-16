#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        int arr[8] = {0};
        int sum = 0;
        
        while(n--)
        {
            int x, y;
            cin >> x >> y;
            if(x < 9 && y > arr[x-1])
            {
                sum = sum - arr[x-1] + y;
                arr[x-1] = y;
            }
        }
        cout << sum << endl;
    }
}
