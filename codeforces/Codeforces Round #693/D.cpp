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
    vector<lli>arr(n);
    vector<lli>e,o;
    lli esum=0,osum=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0){
            e.push_back(arr[i]);
        }
        else{
            o.push_back(arr[i]);
        }
    }
    sort(o.begin(),o.end(),greater<lli>());
    sort(e.begin(),e.end(),greater<lli>());
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a>=e.size())
                b++;
            else if(b<o.size() && o[b]>e[a])
                b++;
            else
            {
                esum+=e[a];
                a++;
            }
        }
        else
        {
            if(b>=o.size())
                a++;
            else if(a<e.size() && e[a]>o[b])
                a++;
            else
            {
                osum+=o[b];
                b++;
            }
        }
    }
    if(osum==esum)
    {
        cout << "Tie" << "\n";
    }
    else if(osum>esum)
        cout << "Bob" << "\n";
    else
        cout << "Alice" << "\n";
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




