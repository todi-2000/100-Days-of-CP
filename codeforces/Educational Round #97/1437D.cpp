// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
   //write your code here
    int n;
    cin >> n;
    lli a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    lli h = 0;
    if (n == 1)
    {
        cout << "0\n";return;
    }
    if (n == 2)
    {
        cout << "1\n";
           return;
    }
    int i = 1;
    int j = i;
    lli p = 1;
    while (i < n)
    {
        lli c = 0;
        j = i;
        h++;
        while (p > 0)
        {
            p--;
            while ((j + 1 < n) && (a[j + 1] > a[j]))
            {
                j++;
                c++;
            }

            j++;
            c++;
        }
           i = j;
           p = c;
       }
    cout << h << endl;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




