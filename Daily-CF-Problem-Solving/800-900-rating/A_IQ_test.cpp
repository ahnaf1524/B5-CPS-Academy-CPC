/**
 *    author:  ahnaf_cp
 *    created: 14.06.2025
 **/
#include <algorithm>
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  int even_cnt = 0, odd_cnt = 0;
  int odd_idx = -1, even_idx = -1;

  for (int i = 1; i <= n; ++i) {
    int val;
    cin >> val;
    if (val & 1) {
      ++odd_cnt;
      odd_idx = i;
    } else {
      ++even_cnt;
      even_idx = i;
    }
  }
  cout << (odd_cnt == 1 ? odd_idx : even_idx) << endl;

  return 0;
}
