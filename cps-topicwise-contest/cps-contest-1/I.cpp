#include<iostream>
#include <cmath>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll A, B; cin >> A >> B;
    // exponent
    ll ans = 1;
    for(int i = 0; i < B; ++i) ans *= A;
    cout << ans << endl;
    return 0;
}




