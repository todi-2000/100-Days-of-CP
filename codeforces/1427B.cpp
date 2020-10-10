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
    vector<int>count;
    int x=0,first,last;
    int ans=0;
    int flag=0;
    for(int i=0;i<n;i++)     
    {
        if(s[i]=='W')
        {
            if(x!=0 && flag==1)
            count.push_back(x);
            flag=1;
            x=0;
        }
        else if(s[i]=='L' && flag==1) x++;
        if(i>=1 && s[i]=='W' && s[i-1]=='W') ans+=2;
        else if(s[i]=='W') ans++;
    } 
    sort(count.begin(),count.end());
    int start=0;
    int end=x;  
    for(int i=0;i<n;i++)
    {
        if(s[i]!='W')
        {
            start++;
        } 
        else
        break;
    }
    for(int i=0;i<count.size() && k>=0;i++)
    {
        if(count[i]<=k)
        {
            ans+=(count[i]*2)+1;
            k-=count[i];
        }
        else{
            ans+=(k*2);
            k=0;
        }
    }
    // cout << start << " " << end << " " << k<< " "<< ans << " ";
    if(k>0){
        if(ans==0) 
        {
            ans+=((k-1)*2+1);k=0;
        }
        else
        {
            ans += min(start, k) * 2;
            k -= start;
        }
    }
    if(k>0){
        if (ans == 0 && k == 1)
        {
            ans += ((k - 1) * 2 + 1);
            k = 0;
        }
        else
        {
            ans += min(end, k) * 2;
            k -= end;
        }
    }
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




