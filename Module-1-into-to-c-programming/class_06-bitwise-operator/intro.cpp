#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
typedef long long ll;
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc; cin >> tc;
  while(tc--) {
    ll sum = 0;
    int n, k; cin >> n >> k;
    vector<int>A(n);

    for(int &x : A) cin >> x;

    if(is_sorted(A.begin(), A.end()) || k > 1) Y;
    else N;
  }


  return 0;
}
