#include<iostream>
#include<vector>
#include<algorithm>
#define rall(v) v.rbegin(),v.rend()
#define endl '\n'
#define sz(x) (int)(x).size()

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n; cin >> n;
  vector<int>a(n);

  for(int i = 0; i < n; ++i) cin >> a[i];
  sort(rall(a));
  int len = sz(a);
  len/=2;
  cout << a[len] << endl;
  return 0;
}
