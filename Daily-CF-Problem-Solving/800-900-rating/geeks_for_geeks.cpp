#include<iostream>
#define endl '\n'
using namespace std;
typedef long long ll;

// approach 01 -- using mod
// approach 02 -- using bitwise and
// approach 03 -- using right shift and left shift

n = 5 & 1
101
001
---
001

n = 8

1000
&  1
----
1000

bool isEven(int n) {
  return (n % 2 == 0);
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n; cin >> n;

  cout << boolalpha << isEven(n) << endl;

  return 0;
}
