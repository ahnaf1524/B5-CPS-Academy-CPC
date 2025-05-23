// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : MM : DD : YY
// =============================================================

#include <bits/stdc++.h>
using namespace std;

// ======================= Fast I/O =============================
inline void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// ======================= Type Aliases =========================
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using vi  = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// ======================= Constants ============================
constexpr ll MOD = 1'000'000'007;
constexpr ll INF = 1e18;
constexpr double EPS = 1e-9;
constexpr double PI = acos(-1);
constexpr int MAX = 200'005;

// ======================= Macros ===============================
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define pb          push_back
#define ins         insert
#define ff          first
#define ss          second
#define mp          make_pair
#define endl        '\n'
#define space       ' '
#define yes         cout << "YES\n"
#define no          cout << "NO\n"
#define sz(yo)      (ll)(yo).size()
#define sq(a)       ((a) * (a))

// ======================= Debugging ============================
// Debug macro active only in local mode
#ifdef AHNAF_LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

// ======================= Utility Functions ====================

// Greatest Common Divisor (GCD)
inline ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Least Common Multiple (LCM)
inline ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Modular arithmetic (with default MOD)
inline ll mod_add(ll a, ll b, ll m = MOD) {
    return ((a % m + b % m) % m + m) % m;
}
inline ll mod_sub(ll a, ll b, ll m = MOD) {
    return ((a % m - b % m) % m + m) % m;
}
inline ll mod_mul(ll a, ll b, ll m = MOD) {
    return ((a % m) * (b % m)) % m;
}

// Modular exponentiation (binary exponentiation)
ll binpow(ll base, ll exp, ll m = MOD) {
    base %= m;
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return result;
}

// Modular multiplicative inverse using Fermat's little theorem
ll mod_inverse(ll a, ll m = MOD) {
    return binpow(a, m - 2, m);
}

// Compute LCM of elements in a vector
ll vec_lcm(const vi& nums) {
    ll result = 1;
    for (int num : nums) {
        result = lcm(result, num);
        if (result == 0) return 0;
    }
    return result;
}

// Check if all characters in a string are the same
inline bool all_char_same_str(const string& s) {
    return all_of(s.begin(), s.end(), [&](char c) { return c == s[0]; });
}

// Remove duplicate characters from a string, preserving order
inline string rm_duplicates(const string& s) {
    unordered_set<char> seen;
    string result;
    for (char c : s) {
        if (!seen.count(c)) {
            result.pb(c);
            seen.insert(c);
        }
    }
    return result;
}

// ======================= Number Theory ========================

// Sieve of Eratosthenes for primes up to n
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
    return is_prime;
}

// Prime factorization of n, returns vector of (prime, exponent)
vector<pll> prime_factors(ll n) {
    vector<pll> factors;
    for (ll i = 2; i * i <= n; ++i) {
        int cnt = 0;
        while (n % i == 0) {
            n /= i;
            ++cnt;
        }
        if (cnt) factors.emplace_back(i, cnt);
    }
    if (n > 1) factors.emplace_back(n, 1);
    return factors;
}

// Get all divisors of n
vector<ll> get_divisors(ll n) {
    vector<ll> divs;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divs.pb(i);
            if (i != n / i) divs.pb(n / i);
        }
    }
    sort(all(divs));
    return divs;
}

// ======================= Number Utilities =====================

// Reverse digits of a number
ll reverse_number(ll n) {
    ll rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// ======================= Frequency Counting ===================

// Count frequency of elements in a vector
template<typename T>
map<T, int> count_freq(const vector<T>& data) {
    map<T, int> freq;
    for (const auto& item : data)
        freq[item]++;
    return freq;
}

// Count frequency of characters in a string
map<char, int> count_chars(const string& s) {
    return count_freq(vector<char>(s.begin(), s.end()));
}

// ======================= Bitwise Operations ===================

// Check if x is a power of two
bool is_power_of_two(ll x) {
    return x > 0 && (x & (x - 1)) == 0;
}

// Count number of set bits in x
int count_set_bits(ll x) {
    return __builtin_popcountll(x);
}

// Get the i-th bit of x (0-based)
int get_bit(ll x, int i) {
    return (x >> i) & 1;
}

// Set the i-th bit of x (0-based)
ll set_bit(ll x, int i) {
    return x | (1LL << i);
}

// Clear the i-th bit of x (0-based)
ll clear_bit(ll x, int i) {
    return x & ~(1LL << i);
}

// Toggle the i-th bit of x (0-based)
ll toggle_bit(ll x, int i) {
    return x ^ (1LL << i);
}

// Get lowest set bit position (1-based), -1 if none
int lowest_set_bit(ll x) {
    return x == 0 ? -1 : __builtin_ffsll(x);
}

// Get highest set bit position (0-based), -1 if none
int highest_set_bit(ll x) {
    return x == 0 ? -1 : 63 - __builtin_clzll(x);
}

// ======================= Factorials & Combinatorics ===========

vll fac(MAX), ifac(MAX);

void precompute_factorials(int n) {
    fac[0] = ifac[0] = 1;
    for (int i = 1; i <= n; i++) {
        fac[i] = fac[i - 1] * i % MOD;
        ifac[i] = mod_inverse(fac[i]);
    }
}

// Compute nCr modulo MOD
ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fac[n] * ifac[r] % MOD * ifac[n - r] % MOD;
}

// Compute nPr modulo MOD
ll nPr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fac[n] * ifac[n - r] % MOD;
}

// Print all permutations of vector v (sorted order)
template<typename T>
void print_all_permutations(vector<T> v) {
    sort(v.begin(), v.end());
    do {
        for (auto& x : v) cout << x << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));
}

// ======================= Custom Utilities =====================

// Count even and odd numbers in a vector
pair<int, int> count_even_odd(const vi& v) {
    int even = 0, odd = 0;
    for (int x : v) {
        if (x % 2 == 0) even++;
        else odd++;
    }
    return {even, odd};
}

// Remove duplicates from vector (sorted & unique)
template<typename T>
vector<T> remove_duplicates(vector<T> v) {
    sort(all(v));
    v.erase(unique(all(v)), v.end());
    return v;
}

// Remove duplicate characters from string (preserving order)
string remove_duplicate_chars(const string& s) {
    unordered_set<char> seen;
    string result;
    for (char c : s) {
        if (!seen.count(c)) {
            seen.insert(c);
            result.pb(c);
        }
    }
    return result;
}

// Remove duplicate digits from an integer (preserve order of first occurrences)
ll remove_duplicate_digits(ll n) {
    string s = to_string(n);
    string result = remove_duplicate_chars(s);
    return stoll(result);
}

// Convert string of digits to vector<int>
vi string_to_digit_vector(const string& s) {
    vi digits;
    for (char c : s) {
        if (isdigit(c)) digits.pb(c - '0');
    }
    return digits;
}

// Sum of digits in a number
int digit_sum(ll n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Prefix sum of a vector<int>
vi prefix_sum(const vi& v) {
    vi prefix(sz(v) + 1, 0);
    for (int i = 0; i < sz(v); ++i)
        prefix[i + 1] = prefix[i] + v[i];
    return prefix;
}

// ======================= Main Solution ========================

void solve(int cs = -1) {
#ifdef AHNAF_LOCAL
    if (cs != -1) cout << "Case #" << cs << " : ";
#endif
    // TODO: Your logic here
    int n; cin >> n;
    vi A(n);
    for(int i = 0; i < n; ++i) {
      cin >> A[i];
      A[i] = abs(A[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; ++i) {
      if(A[i] <= A[0]) {
        ans++;
      }
    }

    if(ans > n  / 2 + 1) no;
    else yes;
}


int main() {
    fastIO();

#ifdef AHNAF_LOCAL
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#endif

    int tc; cin >> tc;
#ifdef AHNAF_LOCAL
    for (int cs = 1; cs <= tc; ++cs) solve(cs);
#else
    while (tc--) solve();
#endif

    return 0;
}
