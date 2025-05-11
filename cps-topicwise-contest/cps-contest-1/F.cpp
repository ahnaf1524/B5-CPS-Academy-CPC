#include<iostream>
#include<iomanip>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r; cin >> r;
    cout << fixed << setprecision(6) << 3.141592653589793 * r * r << " " << 2 * 3.141592653589793 * r << endl;
    return 0;
}



