#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while(t>0)
	{
	    int i,j,n,m,doll[100100],c;
	    cin >> n;
	    for( i=0 ; i<n ; i++)
	    {
	        cin >> doll[i];
	    }
	    int sum=0;
	    for( i=0 ; i<n ; i++)
	    {
	        for( j=i+1 ; j<n ; j++)
	        {
	           if(doll[i]>doll[j])
	           {
	               c=doll[i];
	               doll[i]=doll[j];
	               doll[j]=c;
	           }    
	        }
	    }
	    
	    for(i=0 ; i<n ; i=i+2)
	    {
	        if(doll[i]!=doll[i+1])
	        {
	            cout << doll [i] << endl;
	            break;
	        }
	    }
	    t--;
	}
	return 0;
}
