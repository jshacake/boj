#include <iostream>

using namespace std;

long long dp[1001][10] = { {0,}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1} } ;

int main() {
	int n;
	cin >> n;
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				dp[i][k] += dp[i - 1][j] % 10007 ;
			}
		}
	}
	
	long long num = 0;
	for (int i = 0; i < 10; i++) {
		num += dp[n][i] % 10007;
	}
	cout << num % 10007 << endl;
	
	return 0;
}
