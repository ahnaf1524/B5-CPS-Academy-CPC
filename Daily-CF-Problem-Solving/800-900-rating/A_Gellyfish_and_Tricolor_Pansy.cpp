#include <algorithm>
#include <iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

void solver(void) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (min(a, c) >= min(b, d))
    cout << "Gellyfish" << endl;
  else
    cout << "Flower" << endl;
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
