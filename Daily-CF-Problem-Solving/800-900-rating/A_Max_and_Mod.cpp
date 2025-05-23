#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#define endl '\n'
#define space ' '

using namespace std;

void solver(void) {
  int n;
  cin >> n;

  if (n % 2 == 0)
    cout << "-1" << endl;
  else {
    cout << n << space;
    for (int i = 1; i < n; ++i) cout << i << ' ';

    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    solver();
  }

  return 0;
}