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
        int n;
        cin >> n;
        map<int,int> m;

        while(n--)
        {
            int temp;
            cin >> temp;
            m[temp]++;
        }

        int ans=0;
        for(auto x:m)
            ans += x.second/2;
            
        cout << ans;
    }
    return 0;
}
