#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int i=0;
	
	for( ; i<test ; i++ ){
	    string str;
	    cin>>str;
	    
	    int length = str.length();
	    int j=0;
	    bool poss = true;
	    if(str[0] == '<' 
        && str[1] == '/' 
        && str[length-1] == '>'
        && length>3){
            
        }else{
            cout<<"Error"<<endl;
            continue;
        }
	    
	    j=2;
	    for( ; j<length-1 ; j++ ){
	        int val = (int)str[j];
	        //cout<<val<<endl;
	        if( (val>=48 && val<=57) 
	        || (val>=97 && val<=122) ){
	            
	        }else{
	            poss = false;
	            break;
	        }
	    }
	    
	    poss ? cout<<"Success"<<endl: cout<<"Error"<<endl;
	    
	}
	return 0;
}
