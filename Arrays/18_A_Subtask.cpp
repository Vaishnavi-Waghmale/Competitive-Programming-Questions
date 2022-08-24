#include <iostream>
using namespace std;

void solution() {
    int n,m,k,s,score=0,flag=1;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) {
        cin>>s;
        if(s) score++;
        else {
            if(score<m) {
                flag=0;
            }
        }
    }
    if(score==n) cout<<100;
    else if(flag&&score>=m) cout<<k;
    else cout<<0;
    cout<<endl;
} 

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) solution();
	return 0;
}
