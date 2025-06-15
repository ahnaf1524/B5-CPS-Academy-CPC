#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define Y cout << "YES\n"
#define N cout << "NO\n"

#define fastio()           \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0)

void setIO() {
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
//  freopen("out.txt", "w", stdout);
//  freopen("error.txt", "w", stderr);
#endif
}

bool all_elements_same(const vector<int>& vec) {
  if (vec.empty()) return true;
  int f = vec[0];
  return all_of(vec.cbegin(), vec.cend(), [f](int e) { return e == f; });
}


void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  bool ok = false;
  if(all_elements_same(a)) {
    ok = true;
  }
  else {
    for(int i = 0; i < n - 1; ++i) {
      if(!a[i] && !a[i+1]) {
        ok = true;
        break;
      }
    }
  }
  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  setIO();
  fastio();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
