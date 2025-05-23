#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc; cin >> tc;


  while(tc--) {

    int n; cin >> n;
    vector<int>vec(n);
    for(int &x : vec) cin >> x;

    if((int)vec.size() == 1) cout << vec[0] << endl;
    else {

      ll sum = 0, extra = n - 1;
      for(int i = 0; i < n; ++i) {
        sum +=vec[i];
      }

      cout << sum - extra << endl;
    }

  }
  return 0;
}
