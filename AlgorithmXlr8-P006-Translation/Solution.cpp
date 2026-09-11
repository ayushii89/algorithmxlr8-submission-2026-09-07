#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size()) 
    {
        cout << "NO"<<endl;
        return 0;
    }

    string reversedS = "";
    for (int i = (int)s.size() - 1; i >= 0; i--) 
    {
        reversedS += s[i];
    }

    cout << (reversedS == t ? "YES" : "NO") << endl;
    return 0;
}