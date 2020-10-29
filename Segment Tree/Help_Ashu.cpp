// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<long long int>st(500000,0);
vector<lli>arr(100001,0);

void buildTree(lli si,lli ss,lli se)
{
    if(ss==se)
    {
        if(arr[ss]%2!=0)
        st[si]=1;
        else
        st[si]=0;
        return;
    }
    lli mid=(ss+se)/2;
    buildTree(2*si+1,ss,mid);
    buildTree(2*si+2,mid+1,se);
    st[si]=st[2*si+1]+st[2*si+2];
}

void update(lli si,lli ss,lli se,lli qi)
{
    if(ss==se)
    {
        if(arr[ss]%2!=0)
        st[si]=1;
        else
        st[si]=0;return;
    }
    lli mid=(ss+se)/2;
    if(qi<=mid) update(2*si+1,ss,mid,qi);
    else update(2*si+2,mid+1,se,qi);
    st[si] = st[2 * si + 1] + st[2 * si + 2];
}

lli query(lli si,lli ss,lli se,lli qs,lli qe)
{
    if(qs>se || qe<ss)
    return 0;
    if(qs<=ss && qe>=se)
    return st[si];
    lli mid=(ss+se)/2;
    lli l = query(2 * si + 1, ss, mid, qs, qe);
    lli r = query(2 * si + 2, mid + 1, se, qs, qe);
    return l+r;
}

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    for(lli i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    buildTree(0,0,n-1);
    // for(lli i=0;i<14;i++)
    // cout << st[i] << " ";
    // cout << "\n";
    lli q;
    cin >> q;
    for(lli i=0;i<q;i++)
    {
        lli x,y,z;
        cin >> x >> y >> z;
        if(x==0)
        {
            if((arr[y-1]&1)!=(z&1)){
                arr[y-1]=z;
            update(0,0,n-1,y-1);}
        }
        lli odd=query(0,0,n-1,y-1,z-1);
        // cout << i+1 <<  ' '<<odd << ' '; 
        if(x==1)
        {
            cout << (z-y+1)-odd << "\n";
        }
        else if(x==2)
        cout << odd << "\n";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




