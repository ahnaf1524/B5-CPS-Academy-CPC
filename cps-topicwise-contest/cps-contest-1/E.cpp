#include<iostream>
#include<iomanip>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b; cin >> a >> b;
    cout << fixed << setprecision(5) << a / b << " " << a % b << " " << (double)a / b << endl;
    return 0;
}



