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
        int a[6];
        for(int i=0;i<6;i++)
            cin >> a[i];
        int sum = 0;
        for(int i=0;i<6;i++)
            sum += a[i];

        if(sum&1)
        {
            cout << "NO";
            return 0;
        }

        for(int i=0;i<=63;i++)
        {
            int temp = 0;
            for(int j=0;j<6;j++)
                if((i & (1<<j) ) )
                temp += a[j];

            if(temp == sum/2)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";

    }
    return 0;
}
