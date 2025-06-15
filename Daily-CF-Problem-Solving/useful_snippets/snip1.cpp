#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// 对我有帮助
int main() {
  rj;
  int tc; cin >> tc;
  while(tc--) {
	
  }
  return 0;
}


#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';

#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rj ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());



#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
	


#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;


#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
using namespace std;

// Fast IO
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// ========== TYPE ALIASES ==========
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;

// ========== SORTING ==========
void example_sorting() {
    vi v = {3,1,4,1,5};
    sort(v.begin(), v.end());        // Ascending
    sort(v.rbegin(), v.rend());      // Descending
}

// ========== UNIQUE ELEMENTS ==========
void example_unique() {
    vi v = {1, 2, 2, 3, 3, 3};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end()); // Remove duplicates
}

// ========== PREFIX SUM ==========
vector<int> prefix_sum(const vector<int>& v) {
    vector<int> ps(v.size() + 1, 0);
    for (size_t i = 0; i < v.size(); ++i) {
        ps[i+1] = ps[i] + v[i];
    }
    return ps;
}

// ========== GCD & LCM ==========
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a,b);
    }
    return a;
}

int lcm(int a, int b) {
    return a / gcd(a,b) * b;
}

// ========== BINARY SEARCH ==========
int binary_search_upper_bound(const vector<int>& arr, int x) {
    int lo = 0, hi = (int)arr.size(), mid;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (arr[mid] <= x) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

int binary_search_lower_bound(const vector<int>& arr, int x) {
    int lo = 0, hi = (int)arr.size(), mid;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (arr[mid] < x) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

// ========== STRING REVERSAL ==========
string reverse_string(const string& s) {
    string t = s;
    reverse(t.begin(), t.end());
    return t;
}

// ========== POWER FUNCTION (Iterative) ==========
ll power(ll base, ll exp) {
    ll result = 1;
    while (exp) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

// ========== POWER MODULO ==========
ll power_mod(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// ========== CHECK IF PRIME (Naive) ==========
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// ========== COUNT SET BITS ==========
int count_set_bits(int n) {
    return __builtin_popcount(n);
}

// ========== CHECK IF POWER OF TWO ==========
bool is_power_of_two(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

// ========== REVERSE BITS ==========
int reverse_bits(int n) {
    return __builtin_bitreverse32(n);
}

// ========== PRINT VECTOR ==========
template<typename T>
void print_vector(const vector<T>& v) {
    for (auto x : v) cout << x << ' ';
    cout << '\n';
}

// ========== COMMON STL USAGE ==========

// Map example: frequency count
void frequency_count_example() {
    vector<int> v = {1,2,2,3,4,4,4};
    map<int,int> freq;
    for (int x : v) freq[x]++;
    for (auto& p : freq) cout << p.first << " appears " << p.second << " times\n";
}

// Lower bound in vector example
int lower_bound_example(const vector<int>& v, int x) {
    auto it = lower_bound(v.begin(), v.end(), x);
    if (it == v.end()) return -1;
    return it - v.begin();
}

// ========== SWAP WITHOUT TEMP ==========
void swap_without_temp(int &a, int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

// ========== CHECK PALINDROME ==========
bool is_palindrome(const string& s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

// ========== ROTATE ARRAY LEFT BY K ==========
template<typename T>
void rotate_left(vector<T>& v, int k) {
    int n = (int)v.size();
    k %= n;
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    reverse(v.begin(), v.end());
}

// ========== CONVERT INT TO BINARY STRING ==========
string int_to_binary(int n) {
    string res;
    for (int i = 31; i >= 0; i--) {
        res += ((n >> i) & 1) ? '1' : '0';
    }
    return res;
}

// ========== CONVERT BINARY STRING TO INT ==========
int binary_to_int(const string& s) {
    int res = 0;
    for (char c : s) {
        res = (res << 1) + (c - '0');
    }
    return res;
}

// ========== SPLIT STRING BY DELIMITER ==========
vector<string> split(const string& s, char delim) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delim)) {
        tokens.push_back(token);
    }
    return tokens;
}

// ========== MAIN FOR TESTING ==========
int main() {
    fastIO();

    vi v = {4,2,5,2,3,3};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    print_vector(v);

    cout << "Prefix sum: ";
    auto ps = prefix_sum(v);
    print_vector(ps);

    cout << "GCD(12, 18): " << gcd(12,18) << "\n";
    cout << "LCM(12, 18): " << lcm(12,18) << "\n";

    cout << "Binary search upper bound of 3: " << binary_search_upper_bound(v, 3) << "\n";
    cout << "Binary search lower bound of 3: " << binary_search_lower_bound(v, 3) << "\n";

    string s = "hello";
    cout << "Reversed string: " << reverse_string(s) << "\n";

    cout << "Power(2, 10): " << power(2,10) << "\n";
    cout << "Power_mod(2, 10, 1000000007): " << power_mod(2,10,1000000007) << "\n";

    cout << "Is 29 prime? " << (is_prime(29) ? "Yes" : "No") << "\n";

    cout << "Count set bits of 29: " << count_set_bits(29) << "\n";
    cout << "Is 16 power of two? " << (is_power_of_two(16) ? "Yes" : "No") << "\n";

    cout << "Swap example: ";
    int a = 5, b = 7;
    swap_without_temp(a, b);
    cout << a << " " << b << "\n";

    cout << "Is 'racecar' palindrome? " << (is_palindrome("racecar") ? "Yes" : "No") << "\n";

    cout << "Rotate left by 2: ";
    vi arr = {1, 2, 3, 4, 5};
    rotate_left(arr, 2);
    print_vector(arr);

    cout << "Int to binary (5): " << int_to_binary(5) << "\n";
    cout << "Binary to int (101): " << binary_to_int("101") << "\n";

    cout << "Split string example:\n";
    auto tokens = split("one,two,three", ',');
    for (auto& t : tokens) cout << t << '\n';

    cout << "\nFrequency count example:\n";
    frequency_count_example();

    return 0;
}
