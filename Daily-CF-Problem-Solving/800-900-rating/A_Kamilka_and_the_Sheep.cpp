// 19-5-2025
// author : ahnaf_cp
#include<iostream>
#include<vector>
#include<algorithm>
#define endl '\n'

using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tc; cin >> tc;

  while(tc--) {

    int n; cin >> n;
    vector<int>A(n);
    for(int &x : A) cin >> x;

    sort(A.begin(), A.end());

    cout << A[n-1] - A[0] << endl;
  }
  return 0;
}

// https://codeforces.com/contest/2092/submission/320333976
