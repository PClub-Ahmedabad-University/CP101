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
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];

        int e=100;
        int ind = 0;
        
        do
        {
            e--;
            ind = (ind+k)%n;
            e -= a[ind]*2;
        }
        while(ind);

        cout << e;
    }
    return 0;
}
