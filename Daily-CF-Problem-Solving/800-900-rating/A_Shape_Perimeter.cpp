/**
 *    author:  ahnaf_cp
 *    created: 13.06.2025
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define Y "YES\n"
#define N "NO\n"

#define fastio()           \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)

#ifndef ONLINE_JUDGE
#define debug(x)       \
  cerr << #x << " = "; \
  _print(x);           \
  cerr << endl;
#else
#define debug(x)
#endif

#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) \
  sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

string in_str(int n) {
  string s;
  cin >> s;
  if ((int)s.length() > n) cerr << "Warning: String too long\n";
  return s;
}
vector<int> in_vec(int n) {
  vector<int> v(n);
  for (int& x : v) cin >> x;
  return v;
}
bool all_elements_same(const vector<int>& vec) {
  if (vec.empty()) return true;
  int f = vec[0];
  return all_of(vec.cbegin(), vec.cend(), [f](int e) { return e == f; });
}

void solve() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  m *= 2;
  for (int i = 1; i < n; ++i) {
    cin >> x >> y;
    m += (x + y);
  }
  cout << m * 2 << endl;
}

void setIO() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//  freopen("out.txt", "w", stdout);
//  freopen("error.txt", "w", stderr);
#endif
}

int main() {
  setIO();
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
