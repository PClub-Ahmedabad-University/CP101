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
        int a[5];
        for(int i=0; i<5; i++)
            cin >> a[i];
        sort(a,a+5);
        ll al=0,bo=0;
        for(int i=0; i<4; i++)
            al += a[i];
        for(int i=1;i<5;i++)
            bo += a[i];

        cout << al << " " << bo;


        }
    return 0;
}
