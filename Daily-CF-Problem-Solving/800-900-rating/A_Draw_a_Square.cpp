#include <algorithm>
#include <iostream>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;

  while (tc--) {
    int l, r, d, u;
    cin >> l >> r >> d >> u;

    if (l == r && r == d && d == u)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
