#include<iostream>
#include<cmath>
#define endl '\n'
#define sp ' '
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc; cin >> tc;

  while(tc--) {
    int n; cin >> n;
    int SQ = ceil(sqrt(n));
    if(SQ * SQ == n) cout << 0 << sp << SQ << endl;
    else cout << "-1" << endl;
  }
  return 0;
}
