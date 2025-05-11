#include<iostream>
#include<iomanip>
#define endl '\n'
using namespace std;
typedef long long ll;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int value; cin >> value;
    // extract first, second , third
    int x = value / 100 , y = (value / 10) % 10 , z = value % 10;
    int second = y * 100 + z * 10 + x;
    int first = z  * 100 + x * 10 + y;
    cout << value + first + second << endl;
    return 0;
}



