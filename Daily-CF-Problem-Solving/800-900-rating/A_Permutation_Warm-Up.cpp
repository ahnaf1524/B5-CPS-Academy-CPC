// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : May 14, 2025
// =============================================================
#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#define space ' '
#define endl '\n'
#define Y "YES"
#define N "NO"


typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solver() {
  int n; cin >> n;
  int n_sqr = n * n;
  cout << abs(n_sqr / 4) + 1 << endl;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int tc; cin >> tc;

	while(tc--) {
		solver();
	}

	return 0;
}
