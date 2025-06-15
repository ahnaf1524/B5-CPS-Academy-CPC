/**
 *    author:  ahnaf_cp
 *    created: 14.06.2025
 **/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define endl '\n'
using namespace std;

string in_str(int n) {
  string s;
  cin >> s;
  if ((int)s.length() > n) {
    cerr << "Warning: String length doesn't match expected n\n";
  }
  return s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    /**
     // cur tracks the current balance:

    // +1 for (

    // -1 for )
    **/
    string str = in_str(200005);
    int cur = 0, cnt = 0;
    for (auto c : str) {
      if (c == '(')
        ++cur;
      else
        --cur;
      if (cur == 0) ++cnt;
    }
    cout << (cnt > 1 ? "YES" : "NO") << endl;
  }
  return 0;
}
