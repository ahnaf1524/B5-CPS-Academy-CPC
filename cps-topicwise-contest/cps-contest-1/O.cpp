#include<iostream>
#include <cmath>
#include <bitset>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N; cin >> N;

    ll ans = 1;
    for(int i = 0; i < 3; ++i) ans*=N;
    cout << ans << endl;
    return 0;
}


