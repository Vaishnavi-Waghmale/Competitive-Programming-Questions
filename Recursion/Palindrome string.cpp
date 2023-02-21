#include <bits/stdc++.h> 

bool check(string str, int i, int j){
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return check(str, i+1, j-1);
    }
}
bool checkPalindrome(string s)
{
    // Write your code here.

    check(s, 0, s.length()-1);

    return check;

    
}
