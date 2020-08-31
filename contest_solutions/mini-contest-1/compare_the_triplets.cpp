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
        int a[3],b[3];
        for(int i=0; i<3; i++)
            cin >> a[i];
        for(int i=0; i<3; i++)
            cin >> b[i];

        int al=0,bo=0;
        for(int i=0; i<3; i++)
        {
            if(a[i] > b[i])
                al++;
            else if(b[i] > a[i])
                bo++;
        }

        cout << al << " " << bo;


        }
    return 0;
}
