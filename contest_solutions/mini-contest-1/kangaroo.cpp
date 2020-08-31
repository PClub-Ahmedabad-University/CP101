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
        int x1,v1,x2,v2;
        cin >> x1 >> v1 >> x2 >> v2;

        if(x1 > x2)
        {
            swap(x1,x2);
            swap(v1,v2);
        }

        x2 -= x1;
        if(v1 < v2)
        {
            cout << "NO";
            break;
        }
        else if(x2 == 0 && v1 == v2)
        {
            cout << "YES";
            break;
        }
        
        if(v1 == v2)
        {
            cout << "NO";
            break;
        }
        if(x2 % (v1-v2))
        {
            cout << "NO";
        }
        else
            cout << "YES";
    }
    return 0;
}
