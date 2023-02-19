#include <bits/stdc++.h> 
int countDistinctWays(int n) {
    //  Write your code here.
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = countDistinctWays(n-1) + countDistinctWays(n-2);

    return ans;
}
