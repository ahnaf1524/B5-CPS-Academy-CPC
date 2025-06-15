#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rj ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());

#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;

#define all(v) v.begin(),v.end()
const int maxN = 55;


template<typename T>
void print_vector(const vector<T>& v) {
    for (auto x : v) cout << x << ' ';
    cout << '\n';
}


int main() {
  rj;
  int tc; cin >> tc;
  int cs = 1;
  while(tc--) {
    cout << "Case #" << cs++ << " : \n";
    int n; cin >> n;
    vector<int>A(n);
    for(int &x : A) cin >> x;
    sort(all(A));
    A.erase(unique(A.begin(), A.end()), A.end());
    print_vector(A);
  }
  return 0;
}
