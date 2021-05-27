#include <bits/stdc++.h>
using namespace std;

int main()
{
    string div, encoded;
    cout << "Enter the data word =";
    cin >> encoded;
    cout << "Enter the divisor =";
    cin >> div;
    int m = encoded.size(), n = div.size();
    for (int i = 0; i <= m - n + 1;)
    {
        for (int j = 0; j < n; j++)
            encoded[i + j] = encoded[i + j] == div[j] ? '0' : '1';
        for (; i < encoded.size() && encoded[i] != '1'; i++);
    }
    cout << "Received word:" << encoded.substr(m - n + 1);
    for (char i : encoded.substr(m - n + 1))
    {
        if (i != '0')
        {
            cout << "\nError in communications";
            return 0;
        }
    }
    cout << "\nNo Error";
    return 0;
}
