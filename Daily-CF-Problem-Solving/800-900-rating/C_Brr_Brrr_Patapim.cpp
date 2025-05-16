// =============================================================
// Author   : Ahnaf Tahmid (ahnaf_cp)
// Grade    : 10th Grade Student
// School   : Bangladesh Gas Fields School and College
// Date     : May 16, 2025
// =============================================================

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
inline void fastIO() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

// Type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

// Constants
constexpr ll MOD = 1e9 + 7;
constexpr ll INF = 1e18;
constexpr double EPS = 1e-9;
constexpr double PI = acos(-1);

// Macros
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ins insert
#define ff first
#define ss second
#define mp make_pair
#define endl '\n'
#define space ' '
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define sz(yo) (ll)(yo).size()
#define sq(a) ((a) * (a))

// Debug (active only in local mode)
#ifdef AHNAF_LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

// Utility Functions
inline ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

inline ll mod_add(ll a, ll b, ll m = MOD) {
  return ((a % m + b % m) % m + m) % m;
}
inline ll mod_sub(ll a, ll b, ll m = MOD) {
  return ((a % m - b % m) % m + m) % m;
}
inline ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }

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

ll mod_inv(ll a, ll m = MOD) {
  return binpow(a, m - 2, m);  // Fermat's Little Theorem (m must be prime)
}

ll vec_lcm(const vi& nums) {
  ll result = 1;
  for (int num : nums) {
    result = lcm(result, num);
    if (result == 0) return 0;
  }
  return result;
}

inline bool all_char_same_str(const string& s) {
  return all_of(s.begin(), s.end(), [&](char c) { return c == s[0]; });
}

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

// Sieve of Eratosthenes
vector<bool> sieve(int n) {
  vector<bool> is_prime(n + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= n; ++i)
    if (is_prime[i])
      for (int j = i * i; j <= n; j += i) is_prime[j] = false;
  return is_prime;
}

// Prime factorization
vector<pll> prime_factors(ll n) {
  vector<pll> factors;
  for (ll i = 2; i * i <= n; ++i) {
    int cnt = 0;
    while (n % i == 0) {
      n /= i;
      cnt++;
    }
    if (cnt) factors.emplace_back(i, cnt);
  }
  if (n > 1) factors.emplace_back(n, 1);
  return factors;
}

// Divisors of a number
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

// Solution per test case
void solve(int cs = -1) {
#ifdef AHNAF_LOCAL
  if (cs != -1) cout << "Case #" << cs << " : ";
#endif

  // TODO: Your logic here
  int n; cin >> n;
  set<int>st;
  for(int i = 1; i <= 2 * n; ++i) st.ins(i);

  vi ans(2 * n + 1); // skill index 0

  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= n; ++j) {
      int x; cin >> x;
      ans[i + j] = x;
      if(st.find(x) != st.end()) st.erase(x);
    }
  }

  ans[1] = *st.begin();
  for(int i = 1; i <= 2 * n; ++i) cout << ans[i] << space;

  #ifdef AHNAF_LOCAL
  cout << endl;
  #endif
}

int main() {
  fastIO();

#ifdef AHNAF_LOCAL
  freopen("in.txt", "r", stdin);
  // freopen("out.txt", "w", stdout); // Optional
#endif

  int tc;
  cin >> tc;
#ifdef AHNAF_LOCAL
  for (int cs = 1; cs <= tc; ++cs) solve(cs);
#else
  while (tc--) solve();
#endif

  return 0;
}
// g++ -DAHNAF_LOCAL main.cpp -o main (run this code)
