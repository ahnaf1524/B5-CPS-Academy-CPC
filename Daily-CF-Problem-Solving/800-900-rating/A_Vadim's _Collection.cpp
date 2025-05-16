// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : May 16, 2025
// =============================================================
#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
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
#define sp ' '

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

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll vec_lcm(const vi& nums) {
  ll result = 1;
  for (int num : nums) {
    result = lcm(result, num);
    if (result == 0) return 0;
  }
  return result;
}

bool all_char_same_str(string s) {
  int n = s.size();
  for (int i = 1; i < n; ++i) {
    if (s[i] != s[0]) return false;
  }
  return true;
}

string rm_duplicates(string& s) {
  unordered_set<char> exists;
  string ans = "";

  for (char c : s) {
    if (exists.find(c) == exists.end()) {
      ans.push_back(c);
      exists.insert(c);
    }
  }

  return ans;
}

void solve() {
//  string str; cin >> str;
//
//  bool same = all_char_same_str(str);
//  if (same) {
//    cout << str << endl;
//    return;
//  }
//
//  string ans = rm_duplicates(str);
//
//  string ans2 = str;
//  reverse(all(ans2));
//
//  sort(all(str), greater<char>());  // optional, has no effect on output
//  cout << ans << ans2 << endl;
  int n = 10;
  multiset<int> mst;
  for(int i = 1; i <= n; ++i) {
    char ch; cin >> ch;
    mst.insert(ch - '0');
  }

  for(int i = 0; i < n; ++i) {
    for(int j = 9 - i; j <= 9; ++j) {
      auto it = mst.find(j);
      if(it != mst.end()) {
        mst.erase(it);
        cout << j;
        break;
      }
    }
  }
  cout << endl;
}

int main() {
  fastIO();
  int tc;
  cin >> tc;
// int cs = 1;
  while (tc--) {
//cout << "Case #" << cs++ << " : ";
    solve();
  }
  return 0;
}
