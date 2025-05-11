#include<iostream>
#include <cmath>
#include <bitset>
#define endl '\n'
using namespace std;
typedef long long ll;

ll increaser(ll N , ll P) {
   ll ans = 1;
    for(ll i = 0; i < P; ++i) ans*=N;
    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll A, B; cin >> A >> B;
    cout << increaser(A,B) + increaser(B, A) << endl;
    return 0;
}



