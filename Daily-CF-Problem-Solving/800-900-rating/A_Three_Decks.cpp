// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : May 15, 2025
// =============================================================
#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

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
#define space ' '

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
  int a, b, c; cin >> a >> b >> c;
  if((a + b + c) % 3 != 0) {
    no;
    // for stopping the program
    return;
  }
  int ans = (a + b + c) / 3;
  if(b <= ans) yes;
  else no;
}

int main() {
  fastIO();
  int tc;
  cin >> tc;
  while (tc--) solve();
  return 0;
}
