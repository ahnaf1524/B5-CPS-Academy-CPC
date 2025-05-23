#include <algorithm>
#include <iostream>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    ll a, b;
    cin >> a >> b;
    if (a == 1 && b == 1)
      cout << 1 << endl;
    else {
      ll mn = min(a, b), mx = max(a, b);
      cout << mx - mn << endl;
    }
  }
  return 0;
}
