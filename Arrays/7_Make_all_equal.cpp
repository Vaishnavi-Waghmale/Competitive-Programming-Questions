#include <bits/stdc++.h>
using namespace std;

void solution(){
        int N;
        cin>>N;
        int arr[N];
        for(int i=1; i<=N; i++){
            cin >> arr[i];  
        }
        
        map<int, int> freq;
        for(int a: arr){
            freq[a]++;
        }
        int max_count =0;
        for(auto elm: freq){
            max_count= max(max_count, elm.second);
        }
        
        cout<<N - max_count<<endl;
}
int main() {
    int T;
    cin>>T;
    
    while(T--){
        solution();
    }
	return 0;
}
