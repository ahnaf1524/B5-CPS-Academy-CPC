#include<iostream>
#define endl '\n'
using namespace std;

int main() {

  int tc; cin >> tc;
  while(tc--) {
    int n, m, l, r; cin >> n >> m >> l >> r;
    for(int i = 1; i < n - m; ++i) {
      if(l < 0) {
        l++;
      }
      else {
        r--;
      }
    }
    cout << l << ' ' << r << endl;
  }
  return 0;
}