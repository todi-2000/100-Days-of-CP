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
    string s;
    cin >> s;
    stack<int>st;
    st.push(s[0]);
    int count=0;
    for(int i=1;i<s.size();i++)
    {
        if (st.size()!= 0 && s[i] == st.top())
        {
            st.pop();
            count++;
        }
        else
        st.push(s[i]);
    }
    if(count%2==0)
        cout << "No" << "\n";
    else
    cout << "Yes" << "\n";
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





