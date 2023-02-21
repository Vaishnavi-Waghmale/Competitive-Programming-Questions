#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    // Write your code here. 

    if(N == 0){
        return 1;
    }
    if(N == 1){
        return X;
    }

    long long ans = Pow(X, N/2);

    if(N%2 == 0){
        return ans*ans;
    }
    else{
        return ans*ans*X;
    }
}
