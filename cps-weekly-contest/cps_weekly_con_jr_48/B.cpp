#include <iostream>
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && b != c)
      YES;
    else
      NO;
  }
  return 0;
}