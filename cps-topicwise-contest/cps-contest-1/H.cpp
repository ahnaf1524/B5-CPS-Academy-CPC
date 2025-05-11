#include<iostream>
#include<iomanip>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b; cin >> a >> b;

    // stemina
    // b bar komba
    cout << ( a + b - 1) / b << endl;

    return 0;
}




