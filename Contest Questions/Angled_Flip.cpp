#include <bits/stdc++.h>
using namespace std;
#define fs(s) for(int i=0; i<s; i++)
#define fr(s) for(int j=0; j<r; j++)
#define isFind(M, num) (M.find(num)==M.end())

int main() {
    int t;
    cin>>t;
    while(t--){
        int s, r;
        bool b=true;
        cin>>s>>r;
        if(s==1 || r==1){
            int A[s][r];
            int B[s][r];
            fs(s){
                fr(r){
                    cin>>A[i][j];
                }
            }
            fs(s){
                fr(r){
                    cin>>B[i][j];
                }
            }
            fs(s){
                fr(r){
                    if(A[i][j]!=B[i][j]){
                        b=false;
                        break;
                    }
                }
            }
        }
        else{
            int num;
            map<int, int> A1,A2,B1,B2;
            fs(s){
                fr(r){
                    cin>>num;
                    if((i+j)%2!=0){
                        if(isFind(A1,num)){
                            A1.insert({num, 1});
                        }
                        else{
                            A1.insert({num, A1[num]+1});
                        }
                    }
                    else{
                        if(isFind(A2,num)){
                            A2.insert({num,1});
                        }
                        else{
                            A2.insert({num,A2[num]+1});
                        }
                    }
                }
            }
            fs(s){
                fr(r){
                    cin>>num;
                    if((i+j)%2!=0){
                        if(isFind(B1,num)){
                            B1.insert({num, 1});
                        }
                        else{
                            B1.insert({num, B1[num]+1});
                        }
                    }
                    else{
                        if(isFind(B2,num)){
                            B2.insert({num,1});
                        }
                        else{
                            B2.insert({num,B2[num]+1});
                        }
                    }
                }
            }
            for(auto it : A1){
                if(it.second!=B1[it.first]){
                    b=false;
                    break;
                }
            }
            for(auto it : A2){
                if(it.second!=B2[it.first]){
                    b=false;
                    break;
                }
            }
            
        }
        if(b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
