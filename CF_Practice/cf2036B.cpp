/*
Problem Name:
Problem Link:
Author: Arijit Kar (DemonicAK)
"In programming, the hard part isn’t solving problems,
        but deciding what problems to solve." - Me
*/
//----------HEADER----------
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using namespace chrono;
#pragma GCC optimize("O3", "Ofast", "unroll-loops", "omit-frame-pointer", "inline", "no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma,tune=native", "f16c")
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//----------MACROS----------
#define int long long
#define ull unsigned long long
#define ld long double
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef tuple<int, int, int> triple;
typedef map<int, int> mpi;
typedef map<int, pii> mppi;
typedef map<int, vi> mpvi;
template <typename T>
using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class Key, class Value>
using umap = unordered_map<Key, Value, custom_hash>;
template <class T>
using uset = unordered_set<T, custom_hash>;
template <class T>
using pq = priority_queue<T>;
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;
template <class T>
using oset =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using mset = tree<T, null_type, less_equal<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;

template <class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }
template <class T>
bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }

// ----------INPUT/OUTPUT----------
template <typename... T>
void see(T &...args) { ((cin >> args), ...); }
template <class T>
void read(T &x) { cin >> x; }
template <class T, class... U>
void read(T &t, U &...u)
{
    read(t);
    read(u...);
}
#define intr(...)    \
    int __VA_ARGS__; \
    read(__VA_ARGS__);

#define seea(a, x, y)           \
    for (int i = x; i < y; i++) \
    {                           \
        cin >> a[i];            \
    }
#define seev(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define sees(s, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        s.insert(x);            \
    }
template <typename... T>
void put(T &&...args) { ((cout << args << " "), ...); }
template <typename... T>
void putl(T &&...args)
{
    ((cout << args << " "), ...);
    cout << '\n';
}
#define printvec(v, n)     \
    REP(i, n)              \
    printf("%lld ", v[i]); \
    printf("\n");
//----------DEBUGGING----------
#define error(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << "=" << a << ", ";
    err(++it, args...);
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef DemonicAK_DEBUG
#define DEBUG fprintf(stderr, "====TESTING====: File: %s, Line: %d, Function: %s\n", __FILE__, __LINE__, __PRETTY_FUNCTION__), fflush(stderr)
#define dbg(...) cerr << "(" << #__VA_ARGS__ << ") : ", dbg_out(__VA_ARGS__), fflush(stderr)
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl, fflush(stderr)
#define debug(...) cerr << '[' << __FILE__ << ':' << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__), fflush(stderr)
#define debugm(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
void logger(string vars, Args &&...values)
{
    cerr << "[" << vars << "]: [";
    string delim = ", ";
    string end = "] ";
    (..., (cerr << values << delim));
    cerr << end;
    cerr << endl;
}
#else
#define DEBUG
#define dbg(...)
#define VALUE(x)
#define debug(...)
#define debugm(...)
#endif
//----------CONSTANTS----------
const ld PI = acos(-1);
const ld EPS = 1e-9;
const int INF = INT_MAX;
const long long INFF = LONG_LONG_MAX;
#define mod 1000000007 // 1e9+7
int MOD = 998244353;
#define infL 1e18
const int inf = 1e9;
const int mxN = 1e5 + 7; // row
const int mxM = 1e5 + 7; // col
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

//----------LOOPS----------
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define forn(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define forne(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define ford(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define forsq(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define forc(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define foreach(a, b) for (auto &(a) : (b))
#define rep(i, n) forn(i, 0, n)
#define repn(i, n) forne(i, 1, n)
#define tc(t) while (t--)
//----------operations----------
#define maxoff(a, b) a = max(a, b)
#define minoff(a, b) a = min(a, b)
#define sqr(x) ((x) * (x))

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define allarr(arr, sz) arr, arr + sz
#define sortall(v) sort(all(v))
#define reverseall(v) reverse(all(v))
#define sortarr(arr, sz) sort(allsz(arr, sz))
#define reversearr(arr, sz) reverse(allsz(arr, sz))
#define binarysearch(arr, sz, val) (lower_bound(all(arr), val) - arr)
#define sz(x) ((x).size())
#define permute next_permutation

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define ceil(a, b) a / b + ((a ^ b) > 0 and (a % b));

#define RESET(v, val) memset(v, val, sizeof(v))
#define clr(x) memset(x, false, sizeof(x))
#define gc getchar_unlocked
#define setpr(x) cout << setprecision(x) << fixed
#define UNIQUE(x) \
    sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define setbits(x) __builtin_popcountll(x)
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define SUM(v) accumulate(all(v), 0LL)
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

#define pb emplace_back
#define F first
#define S second
#define mp make_pair

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//----------Extra Functions----------
void IOSETUP(string filename = "")
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (filename.size() > 0)
    {
#ifndef ONLINE_JUDGE
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
#endif
    }
    else
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
#endif
    }
}
inline string IntToString(int a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline int StringToInt(string a)
{
    char x[100];
    int res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

inline string GetString(void)
{
    char x[1000005];
    scanf("%s", x);
    string s = x;
    return s;
}

inline string uppercase(string s)
{
    int n = s.size();
    rep(i, n) if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 'a' + 'A';
    return s;
}

inline string lowercase(string s)
{
    int n = s.size();
    rep(i, n) if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] - 'A' + 'a';
    return s;
}
void BIN(const int n)
{
    const string binary = bitset<64>(n).to_string();
    dbg(binary);
}

bool isPrime(const int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (!(n % i))
            return false;
    return true;
}

// nlogn
int mex(vi &a)
{
    set<int> st(all(a));
    int MEX = 0;
    while (st.count(MEX))
        ++MEX;
    return MEX;
}
// O(n)
int MEX(vi const &A)
{
    static bool used[2 * mxN + 1] = {0};
    // mark the given numbers
    for (const int &x : A)
    {
        if (x <= 2 * mxN)
            used[x] = true;
    }
    // find the mex
    int result = 0;
    while (used[result])
        ++result;
    // clear the array again
    for (int x : A)
    {
        if (x <= 2 * mxN)
            used[x] = false;
    }
    return result;
}

inline int MUL(int a, int b)
{
    if (b == 0)
        return 0;
    int half = MUL(a, b >> 1);
    int result = (half + half) % mod;
    if (b & 1)
        result = (result + a) % mod;
    return result;
}

inline int EXP(int a, int b)
{
    if (b == 0)
        return 1;
    a %= mod;
    int half = EXP(a, b >> 1);
    int result = MUL(half, half);
    if (b & 1)
        result = MUL(result, a);
    return result;
}

inline int INV(int a, int m) { return EXP(a, m - 2); }

inline int ADD(int a, int b, int m)
{
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a + b) % m;
}
inline int SUB(int a, int b, int m)
{
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a - b + m) % m;
}
inline int DIV(int a, int b, int m)
{
    a = (a % m + m) % m;
    b = (b % m + m) % m;
    return (a * EXP(b, m - 2)) % m;
}

//----------GLOBALS----------
const int N = 1;
const int M = 1;
const int bmax = 2e5;
int dp[N][M] = {0};

//----------SOLUTION----------
void solve(int tc)
{
    DEBUG;
    // intr(n);
    int n, k;
    see(n, k);
    // n shelves
    vi brand(k+1, 0);
    rep(i, k)
    {
        int b, c;
        see(b, c);
        brand[b] += c;
    }
    sortall(brand);
    reverseall(brand);
    int sum = 0;
    rep(i, min(n,k))
    {
        sum += brand[i];
    }
    putl(sum);
    //
}
//----------MAIN----------
int32_t main()
{
    auto start = high_resolution_clock::now();
    IOSETUP();
    int Tc = 1, tc = 0;
    cin >> Tc;
    tc(Tc) solve(tc++);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start).count();
    dbg(duration, "microseconds");
    return 0;
}