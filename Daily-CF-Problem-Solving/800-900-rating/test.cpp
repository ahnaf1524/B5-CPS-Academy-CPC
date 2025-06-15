#include <algorithm>
#include <iostream>
#include <string>
#define endl '\n'
#define Y "YES\n"
#define N "NO\n"
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int diff = 0;
    // Count mismatched pairs from both ends
    for (int i = 0; i < n / 2; ++i) {
      if (s[i] != s[n - 1 - i]) {
        diff++;
      }
    }

    // If k >= diff and (k - diff) is even, then possible
    if (k >= diff && (k - diff) % 2 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
