#include<bits/stdc++.h>
#include<cmath>
#define PI 3.14159265358979323846
#define LIMIT 4294967296
typedef long long ll;

using namespace std;

ll sq(ll n, ll m)
{
    n %= m;
    return (n*n)%m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        ll n,m,ans=0;
        cin >> n >> m;

        while(n)
        {
            ans = (ans + sq((n>>1) + (n&1), m)) % m;
            n >>= 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
