#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define MOD 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define init(arr, val) memset(arr, val, sizeof(arr))
#define all(a) a.begin(), a.end()

#define cins(s) \
    string s;   \
    cin >> s;
#define cini(i) \
    int i;      \
    cin >> i;
#define cinll(l) \
    ll l;        \
    cin >> l;
#define cind(d) \
    double d;   \
    cin >> d;
#define sz(x) ((int)(x).size())

#define loop(i, a, b) for (int i = a; i < b; ++i)
#define loopr(i, a, b) for (int i = a; i >= b; --i)
#define loops(i, a, b, step) for (int i = a; i < b; i += step)
#define looprs(i, a, b, step) for (int i = a; i >= b; i -= step)

#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define eb emplace_back // use eb instead of pb its much faster
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator

#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// file inputs.
#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);

using namespace std;

// For ordered_set
using namespace __gnu_pbds;
template <typename T>
using ord_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// constants
const ll maxn = 1e5;
const ll minn = 1e-9;
const ll inf = 1e9;
const double pi = acos(-1);

// bits
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))

// Power of two
bool isPowerOfTwo(ll x)
{
    return (x && (!(x & (x - 1))));
}

// GCD and LCM
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

// Fast Exponential
ll fpow(ll b, ll exp)
{
    if (exp == 0)
        return 1;
    ll t = fpow(b, exp / 2);

    if (exp & 1)
        return (((t % MOD) * (t % MOD) * (b % MOD)) % MOD);
    return (((t % MOD) * (t % MOD)) % MOD);
}

// Fast DivMod
ll divmod(ll i, ll j)
{
    i %= MOD;
    j %= MOD;
    return i * fpow(j, MOD - 2) % MOD;
}

//Number of digits in a number
ll numOfDigits(ll n)
{
    return floor(log10(n)) + 1;
}

// Parity checker
bool getParity(unsigned int n)
{
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n = n & (n - 1);
    }
    return parity;
}

//primality_test
bool isprime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPalindrome(string::iterator low, string::iterator high)
{
    while (low < high)
    {
        if (*low != *high)
            return false;
        low++;
        high--;
    }
    return true;
}

int possiblePalinByRemovingOneChar(string str)
{
    int low = 0, high = str.length() - 1;

    while (low < high)
    {
        
        if (str[low] == str[high])
        {
            low++;
            high--;
        }
        else
        {
            
            if (isPalindrome(str.begin() + low + 1, str.begin() + high))
                return low;

            if (isPalindrome(str.begin() + low, str.begin() + high - 1))
                return high;

            return -1;
        }
    }

    return -2;
}

int main()
{
    FASTIO
    int t = 0;
    cin >> t;
    while (t--)
    {
        cins(str);
        int idx = possiblePalinByRemovingOneChar(str);
        if (idx != -1 && idx != -2)
            cout << idx << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}