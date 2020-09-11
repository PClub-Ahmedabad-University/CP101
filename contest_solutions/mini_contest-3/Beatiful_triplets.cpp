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
    //cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];

        int ans=0;
        for(int i=0;i<n-2;i++)
            for(int j=i+1;j<n-1;j++)
                if(a[j]-a[i] == d)
                    for(int k=j+1;k<n;k++)
                        if(a[k]-a[j] == d)
                            ans++;
        cout << ans;

    }
    return 0;
}
