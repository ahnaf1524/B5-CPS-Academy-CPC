#include <iostream>
#include <algorithm>
using namespace std;

void gcd(int a, int b) {
	int ans;
	for(int i = 1; i < min(a, b); ++i) {

		if(a % b == 0 && b % i == 0) {
			ans = i;
		}

	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cout << 6 / 2 << endl;
	return 0;
}
