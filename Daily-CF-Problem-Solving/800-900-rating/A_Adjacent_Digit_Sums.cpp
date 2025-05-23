#include <iostream>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void solver(void) {
	int x, y; cin >> x >> y;

	if((x + 1) % 9 == y % 9 && y <= x + 1) cout << "Yes" << endl;
	else cout << "No" << endl;
	
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int tc; cin >> tc;
	while(tc--) {
		solver();
	}
	return 0;
}