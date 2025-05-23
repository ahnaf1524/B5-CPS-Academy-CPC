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
  string s; 
  cin >> s;
  
  int cnt = (s[0] == '1');

  for(int i = 1; i < n; ++i) {
    if(s[i] != s[i - 1]) {
      cnt++;
    }
  }
  cout << cnt << endl;

// (s[0] == '1')
// below the expanded version
//   if (s[0] == '1') {
//     ans = 1;
// } else {
//     ans = 0;
// }
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