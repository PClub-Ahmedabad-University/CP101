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
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];

        if(is_sorted(a,a+n))
        {
            cout << "yes";
            return 0;
        }

        int f=0,b=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] > a[i+1])
            {
                f=i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--)
        {
            if(a[i] < a[i-1])
            {
                b=i;
                break;
            }
        }
        swap(a[f],a[b]);

        if(is_sorted(a,a+n))
        {
            cout << "yes\n" << "swap " << f+1 << " " << b+1;
            return 0;
        }
        
        reverse(a+f+1,a+b);

        if(is_sorted(a,a+n))
        {
            cout << "yes\n" << "reverse " << f+1 << " " << b+1;
            return 0;
        }
        cout << "no";
    }
    return 0;
}
