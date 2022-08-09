#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    
    char c;
    cin>>c;
    switch (c){
        case'+':
            cout<<a+b<<endl;
        break;
        case'-':
            cout<<a-b<<endl;
        break;
        case'*':
            cout<<a*b<<endl;
        break;
        case'/':
            cout<<a/b<<endl;
        break;
        default:
            cout<<"invalid Input"<<endl;
        break;
    }
	return 0;
}
