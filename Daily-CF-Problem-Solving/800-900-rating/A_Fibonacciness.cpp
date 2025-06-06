/*------------------------------------
  In the name of Allah,
  Practice is the key to achievement.

  — Ahnaf Tahmid | 10th Grade | BGFS&C
  — Date: 25/05/2
--------------------------------------*/

#include <algorithm>
#include <iostream>
#include <map>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc;
  cin >> tc;

  while (tc--) {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    map<int, int> mp;
    mp[a1 + a2]++;
    mp[a4 - a2]++;
    mp[a5 - a4]++;
    int ans = 0;

    for (auto [_, x] : mp) {
      ans = max(ans, x);
    }
    cout << ans << endl;
  }
  return 0;
}
