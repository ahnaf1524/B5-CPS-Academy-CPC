// 19/5/2025
// author : ahnaf_cp
#include <algorithm>
#include <iostream>
#include <string>
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

void solver(void) {


  int n, k; string str;
  cin >> n >> k;
  cin >> str;

  auto temp = str;
  reverse(temp.begin(), temp.end());

  if (str < temp) {
    cout << "YES" << endl;
    return;
  }
  if (str == string(n, str[0]) || k == 0) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
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
