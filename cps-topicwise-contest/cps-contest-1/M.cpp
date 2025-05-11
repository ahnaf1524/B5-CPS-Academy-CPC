#include<iostream>
#include <cmath>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, X, Y;
    cin >> N >> M;
    cin >> X >> Y;
    cout << (N * X) + (M * Y) << endl;
    return 0;
}
