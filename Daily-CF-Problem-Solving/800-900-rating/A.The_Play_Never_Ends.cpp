#include<iostream>
#include<cmath>
#define endl '\n'
using namespace std;

typedef long long ll;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);


  int tc; cin >> tc;
//  int cs = 1;
  while(tc--) {

//    cout << "Case #" << cs++ << " : ";

    ll k; cin >> k;
//    cout << (k % 3 == 1 ? "YES" : "NO") << endl;
    cout << k % 3 << endl;
  }
  return 0;
}
