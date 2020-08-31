#include<bits/stdc++.h>
#include<cmath>
#define PI 3.14159265358979323846
#define LIMIT 4294967296
typedef long long ll;

using namespace std;

bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    //cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<ll,int> a[n];
        for(int i=0;i<n;i++)
        {
            ll temp;
            cin >> temp;
            a[i] = make_pair(temp,i);
        }
        
        sort(a,a+n,cmp);
        
        ll ans=10e16;
        for(int i=0;i<n-1;i++)
            if(a[i+1].first-a[i].first < ans)
                if(a[i+1].second < a[i].second)
                    ans = a[i+1].first-a[i].first;

        cout << ans;
    }
    return 0;
}
