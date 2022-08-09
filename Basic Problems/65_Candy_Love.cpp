#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &n);
	    int a , sum = 0;
	    for(i=0; i<n; i++)
	    {
	        scanf("%d", &a);
	        sum=sum+a;
	    }
	    if((sum%2)==0)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}
