#include <iostream>
using namespace std;

int inv[10001];

int main() {
	int n, p;
	cin >> n >> p;
	for (inv[1] = 1, i = 2; i <= n; i++) {
		inv[i] = (p - p / i) * inv[p % i] % p;
	}
	for (int i = 1; i <= n; i++) {
		cout << inv[i] << " ";
	}
}
