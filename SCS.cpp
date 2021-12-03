#include <iostream>
#include <string>
using namespace std;

int SCSLength(string X, string Y, int m, int n)
{
	
	if (m == 0 || n == 0) {
		return n + m;
	}

		if (X[m - 1] == Y[n - 1]) {
		return SCSLength(X, Y, m - 1, n - 1) + 1;
	}
	else {
		return min(SCSLength(X, Y, m, n - 1) + 1,
					SCSLength(X, Y, m - 1, n) + 1);
	}
}

int main()
{
	string X = "ABCBDAB", Y = "BDCABA";
	int m = X.length(), n = Y.length();

	cout << "The length of the shortest common supersequence is "
		 << SCSLength(X, Y, m, n);

	return 0;
}