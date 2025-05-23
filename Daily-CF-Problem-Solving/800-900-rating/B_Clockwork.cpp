#include <iostream>
#include <vector>
#include <algorithm>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'

using namespace std;
typedef long long ll;

void solver(void) {
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    for(int i = 0; i < n; ++i) {
        if(vec[i] <= 2 * max(i, n - 1 - i)) {
            no;
            return;
        }
    }

    yes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solver();
    }

    return 0;
}
