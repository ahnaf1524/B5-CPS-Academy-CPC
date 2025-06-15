#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<ll> R(N), B(N), S(N);
    for (int i = 0; i < N; i++) cin >> R[i];
    for (int i = 0; i < N; i++) cin >> B[i], S[i] = R[i] + B[i];

    vector<ll> PR(N+1,0), PB(N+1,0);
    for (int i = 0; i < N; i++) {
        PR[i+1] = PR[i] + R[i];
        PB[i+1] = PB[i] + B[i];
    }

    int LG = 1 + floor(log2(N));
    vector<vector<ll>> st(LG, vector<ll>(N));
    st[0] = S;
    for (int k = 1; k < LG; k++){
        for (int i = 0; i + (1<<k) <= N; i++){
            st[k][i] = min(st[k-1][i], st[k-1][i + (1<<(k-1))]);
        }
    }

    auto rmq = [&](int L, int R){
        int len = R - L +1;
        int k = 31 - __builtin_clz(len);
        return min(st[k][L], st[k][R - (1<<k) + 1]);
    };

    while (Q--){
        int l, r;
        cin >> l >> r;
        ll sR = PR[r+1] - PR[l];
        ll sB = PB[r+1] - PB[l];
        ll mn = rmq(l, r);
        ll d = llabs(sR - sB);
        ll ans = min( (sR + sB - d)/2, mn );
        cout << ans << "\n";
    }
    return 0;
}
