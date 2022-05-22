#include <iostream>
using namespace std;

int main() {
    int N,C1 = 0,C2 = 0, l = 0, W;
    cin >> N;
    while(N--)
    {
        int P1, P2;
        cin >> P1 >> P2;
        C1 += P1;
        C2 += P2;
        if((C1 > C2) && (C1 - C2) > l)
        {
            l = (C1 - C2);
            W = 1;
        }
        else if((C2 > C1) && (C2 - C1) > l)
        {
            l = (C2 - C1);
            W = 2;
        }
    }
        cout << W << " " << l;
	return 0;
}
