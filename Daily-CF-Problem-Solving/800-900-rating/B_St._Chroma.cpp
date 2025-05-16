// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : May 15, 2025
// =============================================================
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

// Type aliases
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<ll, ll>

// Macros
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// Fast I/O
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// Debug macro (only for local testing)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << endl
#else
    #define debug(x)
#endif


void solve() {

  int n, x; cin >> n >> x;
  if(n == 1 && x == 1) cout << 0 << endl;
  else if(n == 1 && x == 0) cout << 0 << endl;
  else if(n == x) {
    for(int i = n-1; i >= 0; --i) {
      cout << i << " ";
    }
    cout << endl;
  }
  else {

    for(int i = 0; i <= n - 1; ++i) {
      if(i == x) continue;
      cout << i << " ";
    }
    cout << x << endl;
  }

}

// Main driver
int main() {
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
