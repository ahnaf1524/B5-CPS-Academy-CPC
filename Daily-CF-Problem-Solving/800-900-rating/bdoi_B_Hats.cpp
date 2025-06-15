/**
 *    author:  ahnaf_cp
 *    created: 13.06.2025
 **/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (int)(x).size()

#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

using namespace std;
typedef long long ll;
typedef long double ld;

string in_str(int n) {
  string s;
  cin >> s;
  if ((int)s.length() > n) {
    cerr << "Warning: String length doesn't match expected n\n";
  }
  return s;
}
vector<int> in_vec(int n) {
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  return v;
}

void solve(void) {
  int n; cin >> n;
  vector<int>h(n);
  for(int i = 0; i < n; ++i) cin >> h[i];
  string str = in_str(n);
  bool ok = true;
  for(int i = 1; i <= n; ++i) {
    if(str[i-1] == '0') {
      if(h[i-1] == i + 1) {
        ok = false;
        break;
      }
    }
    else if(str[i - 1] == '1') {
      if(h[i - 1] != i + 1) {
        ok = false;
        break;
      }
    }

  }
  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
