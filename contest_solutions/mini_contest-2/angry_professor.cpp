#include<bits/stdc++.h>
#include<cmath>
#define PI 3.14159265358979323846
#define LIMIT 4294967296
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin >> a[i];
        int cnt=0;
        for(int i=0;i<n;i++)
            cnt += (a[i] < 1);
            
        if(cnt >= k)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
