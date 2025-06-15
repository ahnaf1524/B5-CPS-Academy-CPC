#include <bits/stdc++.h>
using namespace std;

// Fast IO
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ========== RANGE SUM QUERY (Prefix Sum) ==========
struct PrefixSum {
    vector<int> ps;
    PrefixSum(const vector<int>& arr) {
        ps.resize(arr.size() + 1);
        for (size_t i = 0; i < arr.size(); i++)
            ps[i+1] = ps[i] + arr[i];
    }
    int query(int l, int r) { // sum arr[l..r]
        return ps[r+1] - ps[l];
    }
};

// ========== SIEVE OF ERATOSTHENES (Prime Preprocessing) ==========
vector<bool> sieve(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i*i <= n; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= n; j += i)
                prime[j] = false;
        }
    }
    return prime;
}

// ========== FACTORIAL + MODULAR INVERSE PRECOMPUTATION ==========
const int MOD = 1e9+7;
const int MAX = 1e6+5;
vector<long long> fact(MAX), invFact(MAX);

// Modular exponentiation
long long modPow(long long base, long long exp, long long mod = MOD) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

long long modInverse(long long n, long long mod = MOD) {
    // Fermat's little theorem: a^(mod-2) mod mod
    return modPow(n, mod - 2, mod);
}

void precomputeFactorials() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++)
        fact[i] = (fact[i-1] * i) % MOD;
    invFact[MAX-1] = modInverse(fact[MAX-1], MOD);
    for (int i = MAX - 2; i >= 0; i--)
        invFact[i] = (invFact[i+1] * (i+1)) % MOD;
}

// nCr % MOD
long long nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n-r] % MOD;
}

// ========== TWO POINTERS ==========
void twoPointersExample() {
    vector<int> arr = {1, 2, 2, 3, 4, 5};
    int n = (int)arr.size();
    int sum = 5;
    int l = 0, r = 0, curr_sum = 0;
    while (r < n) {
        curr_sum += arr[r++];
        while (curr_sum > sum && l < r) {
            curr_sum -= arr[l++];
        }
        if (curr_sum == sum) {
            cout << "Subarray [" << l << ", " << r-1 << "] sums to " << sum << "\n";
        }
    }
}

// ========== GCD EXTENDED ==========
long long gcdExtended(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    long long x1, y1;
    long long gcd = gcdExtended(b % a, a, x1, y1);
    x = y1 - (b/a) * x1;
    y = x1;
    return gcd;
}

// ========== PRIME FACTORIZATION ==========
vector<pair<long long,long long>> primeFactorization(long long n) {
    vector<pair<long long,long long>> factors;
    for (long long i = 2; i*i <= n; i++) {
        long long cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt) factors.emplace_back(i, cnt);
    }
    if (n > 1) factors.emplace_back(n, 1);
    return factors;
}

// ========== CHECK IF PALINDROMIC NUMBER ==========
bool is_palindromic_number(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

// ========== MAXIMUM SUBARRAY SUM (Kadane's Algorithm) ==========
int maxSubarraySum(const vector<int>& arr) {
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int x : arr) {
        max_ending_here += x;
        max_so_far = max(max_so_far, max_ending_here);
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

// ========== LOWER BOUND & UPPER BOUND WRAPPER ==========
int lower_bound_idx(const vector<int>& v, int x) {
    auto it = lower_bound(v.begin(), v.end(), x);
    if (it == v.end()) return -1;
    return it - v.begin();
}

int upper_bound_idx(const vector<int>& v, int x) {
    auto it = upper_bound(v.begin(), v.end(), x);
    if (it == v.end()) return -1;
    return it - v.begin();
}

// ========== STRING TO INT ==========
int string_to_int(const string& s) {
    int num = 0;
    for (char c : s) {
        if (!isdigit(c)) return -1; // invalid
        num = num * 10 + (c - '0');
    }
    return num;
}

// ========== MAIN TEST ==========
int main() {
    fastIO();

    // Prefix sum example
    vector<int> arr = {1, 2, 3, 4, 5};
    PrefixSum ps(arr);
    cout << "Sum of arr[1..3]: " << ps.query(1,3) << "\n"; // 2+3+4=9

    // Sieve primes up to 20
    auto primes = sieve(20);
    cout << "Primes up to 20: ";
    for (int i = 2; i <= 20; i++) if (primes[i]) cout << i << ' ';
    cout << "\n";

    // Factorials precomputation and nCr
    precomputeFactorials();
    cout << "nCr(5,2) mod " << MOD << ": " << nCr(5,2) << "\n";

    // Two pointers demo
    twoPointersExample();

    // Extended GCD demo
    long long x, y;
    long long g = gcdExtended(30, 50, x, y);
    cout << "GCD(30,50) = " << g << ", x = " << x << ", y = " << y << "\n";

    // Prime factorization demo
    auto factors = primeFactorization(100);
    cout << "Prime factors of 100: ";
    for (auto& p : factors) cout << p.first << "^" << p.second << " ";
    cout << "\n";

    // Palindromic number
    cout << "Is 12321 palindromic? " << (is_palindromic_number(12321) ? "Yes" : "No") << "\n";

    // Kadane's max subarray sum
    vector<int> arr2 = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Max subarray sum: " << maxSubarraySum(arr2) << "\n";

    // String to int
    cout << "String '12345' to int: " << string_to_int("12345") << "\n";
    cout << "String '12a45' to int: " << string_to_int("12a45") << "\n"; // invalid

    return 0;
}
