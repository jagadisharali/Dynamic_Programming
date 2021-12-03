#include <iostream>
using namespace std;
int dist(string X, int m, string Y, int n)
{
	if (m == 0) {
		return n;
	}

	if (n == 0) {
		return m;
	}

	int cost;

	if (X[m - 1] == Y[n - 1]) {
		cost = 0;
	}
	else {
		cost = 1;
	}

	return min (min(dist(X, m - 1, Y, n) + 1,   
			dist(X, m, Y, n - 1) + 1),  		
			dist(X, m - 1, Y, n - 1) + cost);   
}

int main()
{
	string X = "kitten", Y = "sitting";

	cout << "The Levenshtein distance is " << dist(X, X.length(), Y, Y.length());

	return 0;
}