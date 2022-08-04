#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t; cin >> t;

	next:
	while (t--) {
		int n; cin >> n;
		int matrix[n][n] = {};

		for (int i=0; i < n; i++)
			for (int j=0; j < n; j++) {
				if (j == 0 && i == 0)
					matrix[0][0] = 1;

				else if (i == 0)
					matrix[0][j] = matrix[0][j - 1] + j;

				else if (j+1 < n)
					matrix[i][j] = matrix[i-1][j+1] + 1;

				else
					matrix[i][j] = matrix[i-1][j] + (n - i) + 1;
			}

		for (int i=0; i < n; i++) {
			for (int j=0; j < n; j++)
				cout << matrix[i][j] << ' ';

			cout << '\n';
		}
	}

	return 0;
}
