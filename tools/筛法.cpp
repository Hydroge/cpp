#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
bool isPrime[1000010];
int main() {
	memset(isPrime, 0, sizeof isPrime);
	int n, sum = 0;
	cin >> n;
	
	int m = sqrt(n + 0.5);
	for (int i = 2; i <= m; ++i) {
		for (int j = i * i; j < n; j += i) {
			isPrime[j] = 1;
			++sum;
		}
	}
	
	for (int i = 2; i <= n; i++) {
		if (!isPrime[i]) {
			cout << i << " ";
		}
	}
	return 0;
}
