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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int x=0,y=n-1,a=0,b=0;
    vector<int>vr;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='1')
        {    x++;a++;}
        else
            break;
    }
    for (int i = n-1; i>=0; i--)
    {
        if (s[i] != '1')
        {
            y--;
            b++;
        }
        else
            break;
    }
    int count0=0;
    for(int i=x;i<=y;i++)
    {
        if(count0!=0 && s[i]==1)
        {
            vr.push_back(count0);count0=0;}
        else
        count0++;
    }
    if(count0!=0) vr.push_back(count0);
    sort(vr.begin(),vr.end(),greater<int>());
    int idx=0;
    while(k>0 && (a!=0 || b!=0 || vr[vr.size()-1]!=0))
    {
        if(a>0 && a>=b && a>=vr[idx])
        {    k--;a=0;}
        else if(b>0 && b>=a && b>=vr[idx])
        {   k--;b=0;}
        else if(idx<vr.size() && vr[idx]>a && vr[idx]>b)
        {
            vr[idx]=0;
            idx++;
            k=k-2;
        }
    }
    int ans=a+b;
    for(int i=0;i<vr.size();i++)
        ans+=vr[i];
    cout << ans << "\n";
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




