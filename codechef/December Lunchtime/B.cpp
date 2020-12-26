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
    string s,p;
    cin >> s >> p;
    int scount0=0,scount1=0,pcount0=0,pcount1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        scount0++;
        else if(s[i]=='1')
        scount1++;
        if(p[i]=='0')
        pcount0++;
        else if(p[i]=='1')
        pcount1++;
    }
    if(scount0==pcount0 && scount1==pcount1)
    {
        int s1=0,p1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==p[i])
                continue;
            else
            {
                if(s[i]=='0' && p1==0)
                {
                    cout << "No" << "\n";return;
                }
                else if (s[i] == '0' && p1 != 0)
                {
                    p1--;
                }
                if(p[i]=='0' && s1!=0)
                {
                    cout << "No"
                         << "\n";
                    return;
                }
                else if(p[i]=='0' && s1==0)
                {
                    p1++;
                }
            }
            // cout << s1 << " " << p1 << "\n";
        }
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << '\n';
    }
    

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




