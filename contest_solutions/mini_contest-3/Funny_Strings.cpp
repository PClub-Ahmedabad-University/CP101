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
        string s;
        cin >> s;
        string r = s;
        reverse(r.begin(),r.end());

        for(int i=1;i<s.size()-1;i++)
        {
            if(abs(s[i] - s[i+1]) != abs(r[i] - r[i+1]))
            {
                cout << "Not ";
                break;
            }
        }
        cout << "Funny\n";

    }
    return 0;
}
