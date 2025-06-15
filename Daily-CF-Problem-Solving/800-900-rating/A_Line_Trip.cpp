#include <algorithm>
#include <iostream>
#include <vector>
#define endl '\n'
#define cinv(v) \
  for (auto& it : v) cin >> it;
using namespace std;

template <typename T>
void print_vector(const vector<T>& v) {
  for (auto x : v) cout << x << ' ';
  cout << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    cinv(v);

    int ans = v[0];

    for (int i = 1; i < n; ++i) {
      ans = max(ans, v[i] - v[i - 1]);
    }
    ans = max(ans, (x - v.back()) * 2);
    cout << ans << endl;
  }

  return 0;
}
