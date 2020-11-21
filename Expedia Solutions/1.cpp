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
    stack<char> st;
    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] == '{' || s[j] == '(' || s[j] == '[')
            st.push(s[j]);
        else
        {
            // cout << st.top() << " " ;
            if (st.size() == 0)
            {
                cout << "NO" << "\n";
                return;
            }
            if(s[j]==')')
            {
                if(st.top()=='(')
                {
                    st.pop();continue;
                }
                else
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
            }
            if (s[j] == '}')
            {
                if (st.top() == '{')
                {
                    st.pop();
                    continue;
                }
                else
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
            }
            if (s[j] == ']')
            {
                if (st.top() == '[')
                {
                    st.pop();
                    continue;
                }
                else
                {
                    cout << "NO"
                         << "\n";
                    return;
                }
            }
        }
    }
    cout << "YES"<< "\n";
    return;
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




