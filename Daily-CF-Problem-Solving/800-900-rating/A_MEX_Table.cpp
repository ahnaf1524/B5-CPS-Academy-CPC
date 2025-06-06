/*------------------------------------
  In the name of Allah,
  Practice is the key to achievement.

  — Ahnaf Tahmid | 10th Grade | BGFS&C
  — Date: 24/05/2
--------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

long long sum = 0;

// Fast IO
inline void fastIO() { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }

// Type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using str = string;

// Constants
constexpr ll MOD = 1000000007, INF = 1e18;
constexpr double EPS = 1e-9, PI = acos(-1);
constexpr int MAX = 200005;

// Macros
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define sp ' '
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define sz(x) ((int)((x).size()))
#define sq(x) ((x)*(x))

// Debug tools
#ifdef AHNAF_LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

// Math Utilities
inline ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
inline ll mod_add(ll a,ll b,ll m=MOD){return((a%m+b%m)%m+m)%m;}
inline ll mod_sub(ll a,ll b,ll m=MOD){return((a%m-b%m)%m+m)%m;}
inline ll mod_mul(ll a,ll b,ll m=MOD){return((a%m)*(b%m))%m;}
ll binpow(ll a,ll b,ll m=MOD){ll r=1;a%=m;while(b){if(b&1)r=r*a%m;a=a*a%m;b>>=1;}return r;}
ll mod_inverse(ll a,ll m=MOD){return binpow(a,m-2,m);}

// Combinatorics
vll fac(MAX), ifac(MAX);
void precompute_factorials(int n){
    fac[0] = ifac[0] = 1;
    for(int i=1; i<=n; ++i){
        fac[i] = fac[i-1]*i%MOD;
        ifac[i] = mod_inverse(fac[i]);
    }
}
ll nCr(int n, int r){ return (r<0||r>n) ? 0 : fac[n]*ifac[r]%MOD*ifac[n-r]%MOD; }
ll nPr(int n, int r){ return (r<0||r>n) ? 0 : fac[n]*ifac[n-r]%MOD; }

// Frequency utilities
template<typename T> map<T,int> count_freq(const vector<T>&v){ map<T,int>f; for(auto&i:v) f[i]++; return f; }
map<char,int> count_chars(const str&s){ return count_freq(vector<char>(s.begin(), s.end())); }
inline ll count_specific_char(const str&s,char c){ return count(all(s),c); }
inline int count_digit(ll n,int d){ int c=0; while(n){ c+=(n%10==d); n/=10; } return c; }
inline int digit_sum(ll n){ int s=0; while(n) s+=n%10,n/=10; return s; }
inline ll remove_duplicate_digits(ll n){ str s=to_string(n); unordered_set<char>u; str r; for(char c:s) if(!u.count(c)) r+=c,u.insert(c); return stoll(r); }
inline bool all_chars_same(const string &s) { return s.empty() || s.find_first_not_of(s[0]) == string::npos; }
template<typename T>
inline bool all_elements_same(const vector<T> &v) { return v.empty() || all_of(next(v.begin()), v.end(), [&](const T &x){ return x == v[0]; }); }
inline bool all_digits_same(ll n) { for(int d=n%10; n; n/=10) if(n%10!=d) return false; return true; }

template<typename T> vector<T> remove_duplicates(vector<T>v){ sort(all(v)); v.erase(unique(all(v)), v.end()); return v; }
str rm_duplicates(const str&s){ unordered_set<char>u; str r; for(char c:s) if(!u.count(c)) r+=c,u.insert(c); return r; }

// IO Utilities
template<typename T> void read_vec(vector<T>&v,int n){ v.resize(n); for(auto&i:v) cin>>i;};
template<typename T> void print_vec(const vector<T>&v){ for(auto&i:v) cout<<i<<' '; cout<<endl; }

// Numeric & Bit Utilities
vi string_to_digit_vector(const str&s){ vi d; for(char c:s) if(isdigit(c)) d.pb(c-'0'); return d; }
vi prefix_sum(const vi&v){ vi p(sz(v)+1); for(int i=0;i<sz(v);++i) p[i+1]=p[i]+v[i]; return p; }
pair<int,int> count_even_odd(const vi&v){ int e=0,o=0; for(int x:v)(x%2==0?e:o)++; return {e,o}; }
template<typename T> void print_all_permutations(vector<T>v){ sort(all(v)); do{ for(auto&x:v) cout<<x<<' '; cout<<'\n'; } while(next_permutation(all(v))); }

bool is_power_of_two(ll x){ return x>0&&(x&(x-1))==0; }
int count_set_bits(ll x){ return __builtin_popcountll(x); }
int get_bit(ll x,int i){ return (x>>i)&1; }
ll set_bit(ll x,int i){ return x|(1LL<<i); }
ll clear_bit(ll x,int i){ return x&~(1LL<<i); }
ll toggle_bit(ll x,int i){ return x^(1LL<<i); }
int lowest_set_bit(ll x){ return x==0?-1:__builtin_ffsll(x); }
int highest_set_bit(ll x){ return x==0?-1:63-__builtin_clzll(x); }

// Number Theory
vector<bool> sieve(int n){ vector<bool>p(n+1,1); p[0]=p[1]=0; for(int i=2;i*i<=n;++i) if(p[i]) for(int j=i*i;j<=n;j+=i) p[j]=0; return p; }
vector<pll> prime_factors(ll n){ vector<pll>f; for(ll i=2;i*i<=n;++i){ int c=0; while(n%i==0) n/=i,++c; if(c) f.pb({i,c}); } if(n>1) f.pb({n,1}); return f; }
vector<ll> get_divisors(ll n){ vector<ll>d; for(ll i=1;i*i<=n;++i) if(n%i==0){ d.pb(i); if(i!=n/i) d.pb(n/i); } sort(all(d)); return d; }
ll cnt = 0;
// Main solve function
void solve(int cs=-1){
#ifdef AHNAF_LOCAL
    if(cs!=-1) cout<<"Case #"<<cs<<": ";
#endif
  ll a, b; cin >> a >> b;
  cout << max(a, b) + 1 << endl;
}

// Main
int main(){
    fastIO();
#ifdef AHNAF_LOCAL
    freopen("in.txt","r",stdin);
#endif
    int tc; cin >> tc;
#ifdef AHNAF_LOCAL
    for(int cs=1; cs<=tc; ++cs) solve(cs);
#else
    while(tc--) solve();
#endif
    return 0;
}

