//Vaishnavi-Waghmale
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    
    if(a== "R R" || a== "R B" || a== "R G" || a== "B R" || a== "G R"){
        cout<<"R";
        
    }
    else if(a== "B B" || a== "B G" || a== "G B"){
        cout<<"B";
    }
    else if(a== "G G"){
        cout<<"G";
        
    }
    
    
    
	return 0;
}
