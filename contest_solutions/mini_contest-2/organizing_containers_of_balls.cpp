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
        int n;
        cin >> n;
        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> a[i][j];

        ll row[n] = {0}, col[n] = {0};
        for(int i=0; i<n;i++)
            for(int j=0;j<n;j++)
                col[i] += a[i][j], row[i] += a[j][i];

        sort(row,row+n);
        sort(col,col+n);

        bool possible = true;
        for(int i=0; i<n && possible;i++)
            if(row[i] != col[i])
                possible = false;

        if(possible)
            cout << "P";
        else
            cout << "Imp";
        cout <<"ossible \n";
    }
    return 0;
}
