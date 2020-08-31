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
        int b,k,u;
        cin >> b >> k >> u;
        
        int ke[k], us[u];
        for(int i=0;i<k;i++)
            cin >> ke[i];
        for(int i=0;i<u;i++)
            cin >> us[i];
        
        int ans=-1;
        for(int i=0;i<k;i++)
            for(int j=0;j<u;j++)
                if(ke[i]+us[j] <= b)
                    ans = max(ans,ke[i]+us[j]);
        cout << ans;
    }
    return 0;
}
