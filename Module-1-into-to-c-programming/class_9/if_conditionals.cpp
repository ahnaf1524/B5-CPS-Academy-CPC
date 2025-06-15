#include<iostream>
#define endl '\n'
using namespace std;

int main() {
  // fastio
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  // solution
  int a, b; cin >> a >> b;
  cout << "a ";
  if(a < b) cout << "<";
  else if(a > b) cout << ">";
  else if(a == b) cout << "==";
  cout << " b\n";
  return 0;
}
