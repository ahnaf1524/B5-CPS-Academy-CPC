#include <algorithm>
#include <iostream>
#include <string>
#define endl '\n'
#define Y cout << "YES\n"
#define N cout << "NO\n"
#define all(x) (x).begin(), (x).end()

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;

  while (tc--) {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    int zero = count(all(str), '0');
    int one = count(all(str), '1');
    int diff = n / 2 - k;

    zero -= diff;
    one -= diff;

    if (zero >= 0 && one >= 0 && zero % 2 == 0 && one % 2 == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
